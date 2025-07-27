/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:47:59 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/09 17:14:22 by laoubaid         ###   ########.fr       */
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

        Fixed(const int num);
        Fixed(const float num);
        int toInt( void ) const;
        float toFloat( void ) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, Fixed const &fxd);

#endif
