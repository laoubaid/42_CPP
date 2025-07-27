/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:22:58 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 23:24:58 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "- FragTrap default Constructeur!" << std::endl;
    this->_name = "unknown";
    this->hit_pts = 100;
    this->energy_pts = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(std::string &name) {
    std::cout << "FragTrap Name Constructeur called!" << std::endl;
    this->_name = name;
    this->hit_pts = 100;
    this->energy_pts = 100;
    this->_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "- FragTrap Destructeur!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) {
    std::cout << "- FragTrap Copy Constructeur!" << std::endl;
    if (this != &copy)
        *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy) {
    std::cout << "- FragTrap Assignation operator called" << std::endl;
    this->_name = copy._name;
    this->hit_pts = copy.hit_pts;
    this->energy_pts = copy.energy_pts;
    this->_damage = copy._damage;

    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " kindly requesting a High Fives!" << std::endl;
}
