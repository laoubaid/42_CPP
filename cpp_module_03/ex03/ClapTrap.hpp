/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:55:16 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/15 18:55:18 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         hit_pts;
        int         energy_pts;
        int         _damage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap& copy);

        ClapTrap(std::string &name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void set_name(std::string& name);
        void set_hit_pts(int amount);
        void set_enery_pts(int amount);
        void set_damage(int amount);
        std::string get_name(void);
        int get_hit_pts(void);
        int get_enery_pts(void);
        int get_damage(void);
};


#endif