/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:51:10 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 14:30:49 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string stringDEF = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = stringDEF;

    stringPTR = &stringDEF;
    std::cout << &stringDEF << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << stringDEF << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}
