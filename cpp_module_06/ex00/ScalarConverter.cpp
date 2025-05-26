/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:18:34 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/22 23:33:35 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) {
    (void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

bool    isValid(std::string var) {
    int i = 0;
    int size = var.size();

    if (size)
    {
        if ((var[0] == '-' || var[0] == '+') && size != 1)
            i++;
        while (var[i] <= '9' && var[i] >= '0' && i != size)
            i++;
        if (i != size)
            return false;
    }
    return true;
}


bool    isChar(std::string var) {
    int i = 0;
    int size = var.size();
    int res = 0;
    if (size)
    {
        if (var[i] == '-')
            return false;
        if (var[i] == '+')
            i++;
        while (i < size && var[i] == '0')
            i++;
        while (i < size)
        {
            res = res * 10 + (var[i] - '0');
            if (res > 126)
                return false;
            i++;
        }
    }
    if (res < 32)
        return false;
    return true;
}

// bool    isInt(std::string var) {
//     int i = 0;
//     int size = var.size();

//     if (size)
//     {
//         if (var[i] == '-' || var[i] == '+')
//             i++;
//         if (i == size)
//             return false;
//         while (var[i] >= '0' && var[i] <= '9' && i < size) {
//             i++;
//         }
//         if (i != size)
//             return false;
//     }
//     return true;
// }

// bool    isFloat(std::string var) {

// }

// bool    isDouble(std::string var) {

// }


void    ScalarConverter::convert(std::string arg) {
    // (void)arg;
    // double tmp = static_cast<double>(arg);
    if (!isValid(arg))
        std::cout << "Error: Invalid input!" << std::endl;
    // else
    //     std::cout << "Gooooooooooooooooood!" << std::endl;

    else if (isChar(arg)) {
        std::cout << "Great: Its Character!" << std::endl;
    }
    // else if (isInt(arg)) {
    //     std::cout << "-------- its Int" << std::endl;
    // }
    // else if (isFloat(arg)) {

    // }
    // else if (isDouble(arg)) {

    // }
    // else
    //     std::cout << "-------- Error !" << std::endl;

    
}
