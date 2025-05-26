/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:18:31 by laoubaid          #+#    #+#             */
/*   Updated: 2025/05/22 22:52:57 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// max double 1.79769e+308
// max float 3.40282e+38

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Usage: ./convert <your C++ literal>" << std::endl;
    else
        ScalarConverter::convert(av[1]);
    return 0;
}