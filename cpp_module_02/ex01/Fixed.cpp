/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:48:02 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 15:44:46 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_nb = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->value = src.value;
    return *this;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->value = num << fract_nb;
}

Fixed::Fixed(const float num) {
    std::cout << "float constructor called" << std::endl;
    this->value = roundf(num * (1 << fract_nb));
}

int Fixed::toInt( void ) const
{
    int res;

    res = (this->value >> 8);
    return res;
}

float Fixed::toFloat( void ) const
{
    float res;

    res = (this->value) / (float)(1 << fract_nb);
    return res;
}

std::ostream& operator<<(std::ostream& os, Fixed const &fxd)
{
    os << fxd.toFloat();
    return os;
}

/* geters and seters */

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw ) {
    this->value = raw;
}
