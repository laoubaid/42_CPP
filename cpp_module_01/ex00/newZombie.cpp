/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:23:02 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/04 15:21:09 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zomb = new(std::nothrow) Zombie(name);

    if (!zomb)
        std::cout << "allocation failed!" << std::endl, exit(1);
    return (zomb);
}