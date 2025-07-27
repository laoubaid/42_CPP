/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:34:03 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/15 16:44:13 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "- DiamondTrap default Constructeur!" << std::endl;
    ClapTrap::_name = "unknown_clap_name";
    this->_name = "unknown";
    this->hit_pts = FragTrap::hit_pts;
    this->energy_pts = ScavTrap::energy_pts;
    this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(std::string &name) {
    std::cout << "- DiamondTrap Name Constructeur called!" << std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->hit_pts = FragTrap::hit_pts;
    this->energy_pts = ScavTrap::energy_pts;
    this->_damage = FragTrap::_damage;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "- DiamondTrap Destructeur!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
    std::cout << "- DiamondTrap Copy Constructeur!" << std::endl;
    if (this != &copy)
        *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy) {
    std::cout << "- DiamondTrap Assignation operator called" << std::endl;
    this->_name = copy._name;
    this->hit_pts = copy.hit_pts;
    this->energy_pts = copy.energy_pts;
    this->_damage = copy._damage;

    return *this;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I'm " << this->_name << " DiamondTrap , AKA " << ClapTrap::_name << " ClapTrap!\n";
}
