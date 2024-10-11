/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:35:06 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 22:47:50 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	zombs = zombieHorde(5, "test");
	
	for (int i = 0; i < 5; i++){
		zombs[i].announce();
	}
	delete[] zombs;
	return 0;
}
