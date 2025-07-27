/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:55:01 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 16:22:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("unknown") {
    std::cout << "Basic Animal Constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "Basic Animal destructor" << std::endl;
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal Copy Constructor!" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
    std::cout << "Animal Assignation operator!" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

/* geters and seters */

std::string Animal::getType() const {
    return this->type;
}

void Animal::setType(std::string &newtype) {
    this->type = newtype;
}
