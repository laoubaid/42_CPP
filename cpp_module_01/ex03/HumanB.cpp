/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:42:24 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:21:20 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->wpn = NULL;
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their ";
    if (this->wpn)
        std::cout << (*this->wpn).getType();
    std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon& wp)
{
    this->wpn = &wp;
}
