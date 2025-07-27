/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:00:45 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 17:48:13 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <stdlib.h>
        #include <stdio.h>

Cat::Cat() {
    std::cout << "^-^ CAT Constructor" << std::endl;
    type = "Cat";
    brn = new Brain();
}

Cat::~Cat(){
    std::cout << "^-^ CAT destructor" << std::endl;
    delete brn;
}

Cat::Cat(const Cat& copy){
    std::cout << "Cat Copy Constructor!" << std::endl;
    this->type = copy.type;
    brn = new Brain();
    *(this->brn) = *(copy.brn);
}

Cat& Cat::operator=(const Cat& copy) {
    std::cout << "Cat Assignation operator!" << std::endl;
    if (this != &copy)
    {
        *(this->brn) = *(copy.brn);
        this->type = copy.type;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "^-^ Meao! Meao! ..." << std::endl;
}

