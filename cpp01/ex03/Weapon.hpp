/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:37:40 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 01:50:24 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP_
#define __WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();
		std::string	const getType(void);
		void		setType(const std::string type);
};

#endif