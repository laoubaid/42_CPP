/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:18:34 by laoubaid          #+#    #+#             */
/*   Updated: 2025/06/01 15:19:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::arg_ = "";
char        ScalarConverter::char_val_ = 0;
int         ScalarConverter::int_val_ = 0;
float       ScalarConverter::float_val_ = 0.0f;
double      ScalarConverter::double_val_ = 0.0;


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) {
    (void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter() {}


bool ScalarConverter::isChar() {
    char* end;

    if (arg_.empty())
        return false;

    long val = std::strtol(arg_.c_str(), &end, 10);
    if (*end != '\0')
        return false;
    if (val >= -127 && val < 128) {
        char_val_ = val;
        return true;
    }
    return false;
}

bool ScalarConverter::isInt() {
    char* end;

    if (arg_.empty())
        return false;

    long val = std::strtol(arg_.c_str(), &end, 10);
    if (*end != '\0')
        return false;
    if (val >= INT_MIN && val <= INT_MAX) {
        int_val_ = val;
        return true;
    }
    return false;

}

bool ScalarConverter::isFloat() {
    if (arg_.empty())
        return false;
    char* end;
    float val = std::strtof(arg_.c_str(), &end);

    if (*end != 'f' || *(end + 1) != '\0' || arg_[0] == 'f')
        return false;

    if (std::isinf(val))
        ;
    else if (val > FLT_MAX || val < -FLT_MAX)
        return false;
    else if (val != 0.0f && std::fabs(val) < FLT_MIN)
        return false;

    float_val_ = val;
    return true;
}

bool ScalarConverter::isDouble() {
    if (arg_.empty())
        return false;

    char* end;
    double val = std::strtod(arg_.c_str(), &end);

    if (*end != '\0' || arg_.find("0x") == 0 || arg_.find("0X") == 0)
        return false;

    if (std::isinf(val))
        ;
    else if (val > DBL_MAX || val < -DBL_MAX)
        return false;

    else if (val != 0.0 && std::fabs(val) < DBL_MIN)
        return false;

    double_val_ = val;
    return true;
}

bool     specialPrint(double _val) {

    if (std::isinf(_val)) {
        if (std::signbit(_val)) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        else {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }
        return true;
    }
    else if (std::isnan(_val)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return true;
    }
    return false;
}

void    ScalarConverter::Display(bool flag) {
    double  d_tmp = std::strtod(arg_.c_str(), NULL);

    /////////////////////////////////////////////////////////                  printing CHAR
    if ((char_val_ >= 0 && char_val_ < 32) || char_val_ == 127)
        std::cout << "char: Non displayable\n";
    else if (char_val_ > 31)
        std::cout << "char: " << char_val_ << std::endl;
    else
        std::cout << "char: impossible\n";

    /////////////////////////////////////////////////////////                   printing INT
    if (flag && (d_tmp > static_cast<double>(INT_MAX) || d_tmp < static_cast<double>(INT_MIN)))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << int_val_ << std::endl;

    /////////////////////////////////////////////////////////                   printing FLOAT & DOUBLE
    if (double_val_ == static_cast<int>(double_val_)) {
        std::cout << "float: " << std::fixed << std::setprecision(1) << float_val_ << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << double_val_ << std::endl;
    } else {
        std::cout << "float: " << float_val_ << "f" << std::endl;
        std::cout << "double: " << double_val_ << std::endl;
    }
}

void    ScalarConverter::convert(std::string c_literal) {
    arg_ = c_literal;
    if (isChar()) {
        std::cout << "\033[33m\t\t\t\t\tits a character!\033[0m\n" << std::endl;

        int_val_ = static_cast<int>(char_val_);
        float_val_ = static_cast<float>(char_val_);
        double_val_ = static_cast<double>(char_val_);

        Display(false);
    }
    else if (isInt()) {
        std::cout << "\033[33m\t\t\t\t\tits an Int!\033[0m\n" << std::endl;
        if (int_val_ <= -1 || int_val_ >= 128)
            char_val_ = -128;
        else    
            char_val_ = static_cast<char>(int_val_);
        float_val_ = static_cast<float>(int_val_);
        double_val_ = static_cast<double>(int_val_);

        Display(false);
    }
    else if (isFloat()) {
        std::cout << "\033[33m\t\t\t\t\tits a Float!\033[0m\n" << std::endl;

        if (float_val_ <= -1 || float_val_ >= 128)
            char_val_ = -128;
        else    
            char_val_ = static_cast<char>(float_val_);
        int_val_ = static_cast<int>(float_val_);
        double_val_ = static_cast<double>(float_val_);

        if (!specialPrint(double_val_))
            Display(true);
    }
    else if (isDouble()) {
        std::cout << "\033[33m\t\t\t\t\tits a Double!\033[0m\n" << std::endl;

        if (double_val_ <= -1 || double_val_ >= 128)
            char_val_ = -128;
        else    
            char_val_ = static_cast<char>(double_val_);
        int_val_ = static_cast<int>(double_val_);
        float_val_ = static_cast<double>(double_val_);

        if (!specialPrint(double_val_))
            Display(true);
    }
    else
        std::cout << "\033[31mError: Invalid input!\033[0m\n" << std::endl;
}