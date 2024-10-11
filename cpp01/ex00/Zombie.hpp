/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:53:21 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/04 19:02:35 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string &name);
		~Zombie();
		void	announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
