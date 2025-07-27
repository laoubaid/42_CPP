/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:10:09 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 17:49:37 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *zoo[10];


    for (int i = 0; i < 5; i++) {
        zoo[i] = new Dog();
    }
    for (int i = 5; i < 10; i++) {
        zoo[i] = new Cat();
    }
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* w = new WrongCat();
    const WrongCat* w1 = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    std::cout << "----------------------------------------" << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "----------------------------------------" << std::endl;
    
    w->makeSound();
    w1->makeSound();
    
    std::cout << "----------------------------------------" << std::endl;

    Cat sui;
    {
        Cat test = sui;
    }

    std::cout << "----------------------------------------" << std::endl;
    
    delete i;
    delete j;
    delete meta;
    delete w;
    delete w1;
    
    std::cout << "----------------------------------------" << std::endl;
    
    for (int i = 0; i < 10; i++){
        delete zoo[i];
    }

    return 0;
}