/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:42:46 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:17:00 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon*      wpn;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &wp);
        void    attack();
};

#endif
