/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:24:26 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/04 15:22:37 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* lots = new(std::nothrow) Zombie[N];

    if (!lots)
        return NULL;
    for (int i = 0; i < N; i++){
        lots[i].setName(name);
    }
    return lots;
}
