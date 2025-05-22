/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 10:44:59 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/27 22:06:13 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);

        void announce(void);
        
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif