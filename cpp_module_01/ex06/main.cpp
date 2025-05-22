/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:00:49 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/29 15:27:00 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl obj;

    if (ac != 2)
        return (std::cout << "./harlFilter <level>\n", 1);
    obj.complain(av[1]);
    return 0;
}
