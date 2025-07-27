/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:34:01 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/15 16:40:55 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap &operator=(const DiamondTrap& copy);
        DiamondTrap(std::string &name);

        void attack(const std::string& target);
        void whoAmI();
};


#endif
