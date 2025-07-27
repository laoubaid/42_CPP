/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:20:09 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 21:19:03 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "- ScavTrap default Constructeur!" << std::endl;
    this->_name = "unknown";
    this->hit_pts = 100;
    this->energy_pts = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(std::string &name) {
    std::cout << "ScavTrap Name Constructeur called!" << std::endl;
    this->_name = name;
    this->hit_pts = 100;
    this->energy_pts = 50;
    this->_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "- ScavTrap Destructeur!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& copy) {
    std::cout << "- ScavTrap Copy Constructeur!" << std::endl;
    if (this != &copy)
        *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy) {
    std::cout << "- ScavTrap Assignation operator called" << std::endl;
    this->_name = copy._name;
    this->hit_pts = copy.hit_pts;
    this->energy_pts = copy.energy_pts;
    this->_damage = copy._damage;

    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        this->energy_pts--;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode." << std::endl;
}
