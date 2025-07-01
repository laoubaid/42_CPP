/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:18:38 by laoubaid          #+#    #+#             */
/*   Updated: 2025/06/01 15:05:58 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALAR_CONVERTER_HPP_
# define _SCALAR_CONVERTER_HPP_

# include <iostream>
# include <climits>
# include <limits>
# include <cstdlib>

# include <cfloat> 
# include <cmath> 
# include <iomanip>

class ScalarConverter
{
    private:
        static std::string  arg_;
        static char         char_val_;
        static int          int_val_;
        static float        float_val_;
        static double       double_val_;
        
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);
        ~ScalarConverter();

        static bool isChar();
        static bool isInt();
        static bool isFloat();
        static bool isDouble();
        
        static void Display(bool flag);

    public:
        static void     convert(std::string c_literal);
    
};

#endif
