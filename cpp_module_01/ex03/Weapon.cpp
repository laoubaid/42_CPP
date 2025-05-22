/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:35:56 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:09:11 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}
Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}
