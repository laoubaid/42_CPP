/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:00:43 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 16:22:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "o-o DOG Constructor" << std::endl;
    brn = new Brain();
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "o-o DOG destructor" << std::endl;
    delete brn;
}

void Dog::makeSound() const {
    std::cout << "o-o Woof! Woof! ..." << std::endl;
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog Copy Constructor!" << std::endl;
    this->type = copy.type;
    brn = new Brain();
}

Dog& Dog::operator=(const Dog& copy) {
    std::cout << "Dog Assignation operator!" << std::endl;
    if (this != &copy)
    {
        this->brn = copy.brn;
        this->type = copy.type;
    }
    return *this;
}