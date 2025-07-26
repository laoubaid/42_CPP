/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:19:44 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/26 16:42:16 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> *get_database(std::string filename) {
    std::map<std::string, float>   *db = new std::map<std::string, float>;

    std::ifstream                   database(filename.c_str());
    std::string                     line;
    std::string                     key;
    float                          value;
    size_t                          idx;

    while (std::getline(database, line)) {
        idx = line.find(',');
        if (idx != std::string::npos) {
            key = line.substr(0, idx);
            value = std::atof(line.substr(idx + 1).c_str());
            (*db)[key] = value;
        } else {
            std::cerr << "[!] ERROR: bad database!" << std::endl;
        }
    }
    db->erase("date");

    // for (std::map<std::string, float>::iterator it = db->begin(); it != db->end(); ++it) {
    //     std::cout << it->first << ": " << it->second << std::endl;
    // }

    return db;
}

bool is_valid_date(const std::string& date) {
    if (date.size() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;

    for (int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
            return false;
    }
    int year = std::atoi(date.c_str());
    int month = std::atoi(date.c_str() + 5);
    int day = std::atoi(date.c_str() + 8);
    if (month < 1 || month > 12)
        return false;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0)
        days_in_month[1] = 29;
    if (day < 1 || day > days_in_month[month - 1])
        return false;

    return true;
}

float is_valid_value(const std::string& value) {
    if (value.empty())
        return -1;

    char* end;
    float btc_val = strtof(value.c_str(), &end);

    if (*end != '\0')
        return -1;
    if (btc_val < 0.0f)
        throw std::runtime_error("Error: not a positive number.");
    if (btc_val > 1000.0f)
        throw std::runtime_error("Error: too large a number.");

    return btc_val;
}

void bitcoin_exchange(std::map<std::string, float> *db, std::ifstream &input) {
    std::map<std::string, float>::iterator  it;
    std::string                             line;
    std::string                             date;
    std::string                             value;
    size_t                                  idx;
    float                                   xchg_val;

    while (std::getline(input, line)) {
        try {
            idx = line.find(" | ");
            if (idx == std::string::npos)
                throw std::runtime_error("Error: bad input => " + line);
            date = line.substr(0, idx);
            if (!is_valid_date(date))
                throw std::runtime_error("Error: bad input => " + line);
            value = line.substr(idx + 3);
            xchg_val = is_valid_value(value);
            if (xchg_val < 0.0f)
                throw std::runtime_error("Error: bad input => " + line);
            it = db->upper_bound(date);
            it--;
            if (it == db->end()) {
                std::cerr << "[!] No later date found!" << std::endl;
                continue ;
            }
            std::cout << date << " => " << xchg_val << " = " << it->second * xchg_val << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}
