/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:35:06 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 19:08:20 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	
	Zombie* z1;

	z1 = newZombie("smail");   // the func allocate an obj (type Zombie) and returns a ptr to it
	randomChump("ousama"); // here a zombie got created in the func and got destructed at the end of it
	delete z1;   // since i allocated the memoroy for the obj i need to free it with delete
	return 0;
}
