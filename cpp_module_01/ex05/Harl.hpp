/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:05:33 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/04 17:34:17 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        ~Harl();
        void complain( std::string level );

    private:
        static std::string lvls[4];
        void (Harl::*ptr[4])(void);

};