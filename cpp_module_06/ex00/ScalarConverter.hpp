/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:18:38 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/22 22:55:44 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALAR_CONVERTER_HPP_
# define _SCALAR_CONVERTER_HPP_

# include <iostream>
# include <limits>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);
        ~ScalarConverter();

        static void convert(std::string c_literal);
};

#endif
