/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:52:30 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 01:59:43 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP_
#define __HUMANB_HPP_

#include "Weapon.hpp"
#include <cstddef>

class HumanB
{
	private:
		std::string name;
		Weapon *wp;

	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif
