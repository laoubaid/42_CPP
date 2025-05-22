/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:32:55 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/06 19:46:34 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int     num = 10;
    Zombie* apocalypse;

    apocalypse = zombieHorde(num, "john");
    
    if (!apocalypse)
        return std::cout << "allocation failed!" << std::endl, 1;
    for (int i = 0; i < num; i++){
        apocalypse[i].announce();
    }

    delete[] apocalypse;
    return 0;
}
