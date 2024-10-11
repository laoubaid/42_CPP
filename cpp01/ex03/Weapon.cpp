/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:44:43 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 01:49:50 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(){
}

std::string const Weapon::getType(void){
	return type;
}

void	Weapon::setType(const std::string type){
	this->type = type;
}
