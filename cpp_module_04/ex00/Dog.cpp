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
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "o-o DOG destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "o-o Woof! Woof! ..." << std::endl;
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog Copy Constructor!" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
    std::cout << "Dog Assignation operator!" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}