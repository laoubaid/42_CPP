/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:47:59 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/09 17:14:07 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
