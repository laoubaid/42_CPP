/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:20:53 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 16:22:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknown") {
    std::cout << "Basic WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Basic WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "No WrongAnimal no sound, what did you expect?" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    std::cout << "WrongAnimal Copy Constructor!" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
    std::cout << "WrongAnimal Assignation operator!" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

/* geters and seters */

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::setType(std::string &newtype) {
    this->type = newtype;
}
