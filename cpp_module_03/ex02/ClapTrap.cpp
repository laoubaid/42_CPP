/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:10:01 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 21:18:28 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unknown"), hit_pts(10), energy_pts(10), _damage(0) {
    std::cout << "default Constructeur called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "Copy Constructeur called!" << std::endl;
    if (this != &copy)
        *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = copy._name;
    this->hit_pts = copy.hit_pts;
    this->energy_pts = copy.energy_pts;
    this->_damage = copy._damage;

    return *this;
}

ClapTrap::ClapTrap(std::string &name) : _name(name), hit_pts(10), energy_pts(10), _damage(0) {
    std::cout << "Name Constructeur called!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructeur called!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
        this->energy_pts--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_pts -= amount;
        if (this->hit_pts < 0)
            this->hit_pts = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energy_pts > 0 && this->hit_pts > 0)
    {
        std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
        this->hit_pts += amount;
        this->energy_pts--;
    }
}

/*  geters and seters  */

std::string ClapTrap::get_name(void) {
    return this->_name;
}

int ClapTrap::get_hit_pts(void) {
    return this->hit_pts;
}

int ClapTrap::get_enery_pts(void) {
    return this->energy_pts;
}

int ClapTrap::get_damage(void) {
    return this->_damage;
}


void ClapTrap::set_name(std::string& name) {
    this->_name = name;
}

void ClapTrap::set_hit_pts(int amount) {
    this->hit_pts = amount;
}

void ClapTrap::set_enery_pts(int amount) {
    this->energy_pts = amount;
}

void ClapTrap::set_damage(int amount) {
    this->_damage = amount;
}