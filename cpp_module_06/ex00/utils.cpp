/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 10:25:27 by laoubaid          #+#    #+#             */
/*   Updated: 2025/06/01 11:08:45 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

enum e_type {
    _CHAR       = 0,
    _INT        = 1,
    _FLOAT      = 2,
    _DOUBLE     = 3,
    _SPECIAL    = 4,
    _INVALID    = 5
};

// e_type  ScalarConverter::typeFind(size_t len) {
//     size_t  dot = arg_.find('.');
//     size_t  f = arg_.find('f');
//     if (dot == std::string::npos)
//     {
//         if (arg_.compare("inf") || arg_.compare("inff") || arg_.compare("-inf") || arg_.compare("-inff") || \
//             arg_.compare("+inf") || arg_.compare("+inff") || arg_.compare("nan") || arg_.compare("nanf"))
//             return _SPECIAL;
//         if (isChar())
//             return _CHAR;
//         // if (isInt(str, len))
//             return _INT;
//     }
//     if (f != std::string::npos && dot != std::string::npos)
//     {
//         // if (isFloat(arg_, len, dot))
//         //     return _FLOAT;
//     }
//     else if (f == std::string::npos && dot != std::string::npos)
//         return _DOUBLE;
//     return _INVALID;
// }


// void    specialPrint(const std::string& arg_) {
//     if (arg_.compare("inf") || arg_.compare("inff")) {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: inff" << std::endl;
//         std::cout << "double: inf" << std::endl;
//         return ;
//     }
//     else if (arg_.compare("+inf") || arg_.compare("+inff")) {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: +inff" << std::endl;
//         std::cout << "double: +inf" << std::endl;
//         return ;
//     }
//     else if (arg_.compare("-inf") || arg_.compare("-inff")) {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: -inff" << std::endl;
//         std::cout << "double: -inf" << std::endl;
//         return ;
//     }
//     else if (arg_.compare("nan") || arg_.compare("nanf")) {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: nanf" << std::endl;
//         std::cout << "double: nan" << std::endl;
//         return ;
//     }
// }

// void    ScalarConverter::convert(std::string c_literal) {
//     size_t len = 0;

//     arg_ = c_literal;
//     len = arg_.size();
//     typo_ = typeFind(len);
//     switch (typo_)
//     {
//         case _SPECIAL:
//             specialPrint(arg_);
//             break;
//         case _CHAR:
            
//             break;
//         case _INT:
//             /* code */
//             break;
//         case _FLOAT:
//             /* code */
//             break;
//         case _DOUBLE:
//             /* code */
//             break;

//         default:
//             break;
//     }
// }