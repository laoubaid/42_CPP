/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 10:48:07 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/27 22:24:52 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    randomChump("random");
    zombie = newZombie("new");
    (*zombie).announce();
    delete zombie;
    return (0);
}
