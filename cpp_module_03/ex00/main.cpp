/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:31:39 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 20:54:22 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::string nolan("nolan");
    std::string johad("johed");
    std::string saber("saber");
    ClapTrap r1;
    ClapTrap r2(saber);
    ClapTrap r3(r2);

    r1 = r2;
    r1.set_name(nolan);
    r1.set_damage(5);
    r2.set_name(johad);
    r2.set_damage(7);
    r3.set_damage(3);
    
    r1.attack(saber);
    r3.takeDamage(5);
    
    r3.attack(johad);
    r2.takeDamage(3);

    r2.attack(nolan);
    r3.takeDamage(7);

    std::cout << r1.get_name() << " : " << r1.get_hit_pts() << std::endl;
    std::cout << r2.get_name() << " : " << r2.get_hit_pts() << std::endl;
    std::cout << r3.get_name() << " : " << r3.get_hit_pts() << std::endl;

    return 1;
}
