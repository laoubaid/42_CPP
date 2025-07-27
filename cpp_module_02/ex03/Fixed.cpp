/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:48:02 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/09 15:55:02 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_nb = 8;

Fixed::Fixed() : value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int num) {
    // std::cout << "Int constructor called" << std::endl;
    this->value = num << fract_nb;
}

Fixed::Fixed(const float num) {
    // std::cout << "float constructor called" << std::endl;
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

        /* operators overloading */

Fixed &Fixed::operator=(const Fixed &src)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->value = src.value;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Fixed const &fxd)
{
    os << fxd.toFloat();
    return os;
}

        /* arithmetic operators */

Fixed Fixed::operator+(const Fixed &fxd) {
    return (this->toFloat() + fxd.toFloat());
}

Fixed Fixed::operator-(const Fixed &fxd) {
    return (this->toFloat() - fxd.toFloat());
}

Fixed Fixed::operator*(const Fixed &fxd){
    return (this->toFloat() * fxd.toFloat());
}

Fixed Fixed::operator/(const Fixed &fxd){
    return (this->toFloat() / fxd.toFloat());
}

        /*  comparison operators */

bool Fixed::operator>(const Fixed &fxd) const {
    return (this->toFloat() > fxd.toFloat());
}

bool Fixed::operator<(const Fixed &fxd) const {
    return (this->toFloat() < fxd.toFloat());
}

bool Fixed::operator>=(const Fixed &fxd) const {
    return (this->toFloat() >= fxd.toFloat());
}

bool Fixed::operator<=(const Fixed &fxd) const {
    return (this->toFloat() <= fxd.toFloat());
}

bool Fixed::operator==(const Fixed &fxd) const {
    return (this->toFloat() == fxd.toFloat());
}

bool Fixed::operator!=(const Fixed &fxd) const {
    return (this->toFloat() != fxd.toFloat());
}

Fixed& Fixed::operator++() { 
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;

    this->value++;
    return tmp;
}

Fixed& Fixed::operator--() { 
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;

    this->value--;
    return tmp;
}

Fixed& Fixed::min(Fixed& fxd1, Fixed& fxd2) {
    if (fxd1 > fxd2)
        return fxd2;
    return fxd1;
}

const Fixed& Fixed::min(const Fixed& fxd1, const Fixed& fxd2) {
    if (fxd1 > fxd2)
        return fxd2;
    return fxd1;
}

Fixed& Fixed::max(Fixed& fxd1, Fixed& fxd2) {
    if (fxd1 > fxd2)
        return fxd1;
    return fxd2;
}

const Fixed& Fixed::max(const Fixed& fxd1, const Fixed& fxd2) {
    if (fxd1 > fxd2)
        return fxd1;
    return fxd2;
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
