/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:41:40 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:10:31 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon&     wpn;
    public:
        HumanA(std::string name, Weapon& wp);
        ~HumanA();
        void attack();
};

#endif
