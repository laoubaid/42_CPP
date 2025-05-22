/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:05:36 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/04 17:38:03 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string Harl::lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug( void ){ 
    std::cout << "[ DEBUG ]: I hate Anssemble food and service! I really do!" << std::endl; 
}
void Harl::info( void ) { 
    std::cout << "[ INFO ]: The Anssemble food is weird, and the service is poor." << std::endl; 
}
void Harl::warning( void ) { 
    std::cout << "[ WARNING ]: I think its better to avoid fish or anything like it at Anssemble." << std::endl; 
}
void Harl::error( void ) { 
    std::cout << "[ ERROR ]: I just got poisoned by eating at Anssemble! this has to be reported" << std::endl; 
}

void Harl::complain( std::string level )
{
    size_t i = 0;

    while(i < 4 && lvls[i] != level)
        i++;
    switch (i) {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break ;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
