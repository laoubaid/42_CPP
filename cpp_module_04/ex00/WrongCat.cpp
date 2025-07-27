/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:20:59 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 16:22:30 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "ToT WrongCat Constructor" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "ToT WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "WrongCat Copy Constructor!" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
    std::cout << "WrongCat Assignation operator!" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "ToT Me33oo! Me33oo! ..." << std::endl;
}

