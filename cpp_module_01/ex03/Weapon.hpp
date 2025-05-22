/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:33:29 by laoubaid          #+#    #+#             */
/*   Updated: 2024/12/28 15:08:42 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string name);

        const std::string& getType();
        void setType(std::string newType);
};

#endif
