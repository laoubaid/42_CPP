/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:31:39 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 21:18:45 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s;
    ScavTrap c(s);

    s = c;
    s.attack(std::string("test"));
    c.guardGate();

    return 1;
}
