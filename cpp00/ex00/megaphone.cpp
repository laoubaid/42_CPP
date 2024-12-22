/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:08:40 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/19 14:08:47 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **args)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (*++args)
    {
        while (**args)
        {
            std::cout << (char)toupper(**args);
            (*args)++;
        }
    }
    std::cout << std::endl;
    return 0;
}
