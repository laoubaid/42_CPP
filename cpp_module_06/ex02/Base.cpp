/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:21:15 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/02 16:47:11 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}


Base * generate(void)
{
    Base *base;
    timeval tm;

    gettimeofday(&tm, NULL);

    if (tm.tv_usec % 3 == 0)
        base = new A();
    else if (tm.tv_usec % 3 == 1)
        base = new B();
    else
        base = new C();

    return base;
}

void identify(Base* p)
{
    if( dynamic_cast< A* >( p ) )
        std::cout << "the actual type of the object is A" << std::endl;
    else if( dynamic_cast< B* >( p ) )
        std::cout << "the actual type of the object is B" << std::endl;
    else if( dynamic_cast< C* >( p ) )
        std::cout << "the actual type of the object is C" << std::endl;
    else
        std::cout << "the actual type of the object is Base" << std::endl;
}

void identify(Base& p)
{

    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "the actual type of the object is A" << std::endl;
        return;
    }
    catch(const std::bad_cast& e) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "the actual type of the object is B" << std::endl;
        return;
    }
    catch(const std::bad_cast& e) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "the actual type of the object is C" << std::endl;
        return;
    }
    catch(const std::bad_cast& e) {}

    std::cout << "the actual type of the object is Base" << std::endl;
}
