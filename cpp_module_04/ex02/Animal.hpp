/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:52:24 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 15:35:59 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal &copy);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string &newtype);
};


#endif
