/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:02:13 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/12 17:24:56 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char**av) {
    std::map<std::string, float> *db;
    
    if (ac < 2) {
        std::cerr << "Error: could not open file.";
        return 1;
    }
    
    std::ifstream input(av[1]);
    if (!input.is_open()) {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    db = get_database("data.csv");
    bitcoin_exchange(db, input);
    
    return 0;
}
