/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 10:44:59 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/27 21:28:05 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);

        void    announce(void);
        void    setName(std::string &name);
        
};

Zombie* zombieHorde( int N, std::string name );

#endif