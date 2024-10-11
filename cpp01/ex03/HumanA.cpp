/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 00:41:11 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 01:30:17 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : wp(Weapon){
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with their " << wp.getType() << std::endl;
}
