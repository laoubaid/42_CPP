/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:10:10 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/26 17:05:16 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

    if (ac != 2) {
        std::cerr << "Usage: ./RPN <Reverse Polish Notation>" << std::endl;
        return 1;
    }
    try {
        std::string rpn(av[1]);
        stack_based_calculator(rpn);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
