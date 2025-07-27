/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:00:45 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 16:22:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "^-^ CAT Constructor" << std::endl;
    type = "Cat";
}

Cat::~Cat(){
    std::cout << "^-^ CAT destructor" << std::endl;
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat Copy Constructor!" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
    std::cout << "Cat Assignation operator!" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "^-^ Meao! Meao! ..." << std::endl;
}

