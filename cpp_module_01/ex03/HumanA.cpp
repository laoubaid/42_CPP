/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:41:02 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:11:21 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp): wpn(wp)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->wpn.getType() << std::endl;
}
