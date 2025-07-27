/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:47:59 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 15:28:33 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP_
#define FIXED_HPP_

class Fixed
{
    private:
        int value;
        static const int fract_nb;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &src);
        Fixed & operator=(const Fixed &src);

        /* arithmetic operators */
        Fixed operator+(const Fixed &fxd);
        Fixed operator-(const Fixed &fxd);
        Fixed operator*(const Fixed &fxd);
        Fixed operator/(const Fixed &fxd);

        /*  comparison operators */
        bool operator>(const Fixed &fxd) const ;
        bool operator<(const Fixed &fxd) const ;
        
        bool operator>=(const Fixed &fxd) const ;
        bool operator<=(const Fixed &fxd) const ;
        bool operator==(const Fixed &fxd) const ;
        bool operator!=(const Fixed &fxd) const ;

        /* increment/decrement operators */
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        /* min max functions */
        static Fixed& min(Fixed& fxd1, Fixed& fxd2);
        static const Fixed& min(const Fixed& fxd1, const Fixed& fxd2);
        static Fixed& max(Fixed& fxd1, Fixed& fxd2);
        static const Fixed& max(const Fixed& fxd1, const Fixed& fxd2);

        Fixed(const int num);
        Fixed(const float num);
        int toInt( void ) const;
        float toFloat( void ) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, Fixed const &fxd);

#endif