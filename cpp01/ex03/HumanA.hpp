/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:52:18 by laoubaid          #+#    #+#             */
/*   Updated: 2024/10/07 01:30:48 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP_
#define __HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& wp;
	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();
		void	attack(void);
};

#endif
