/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 01:16:43 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 02:01:34 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->wp = NULL;
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void){
	if (wp)
		std::cout << this->name << " attacks with their " << wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	wp = &weapon;
}
