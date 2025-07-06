/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:17:55 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/05 23:34:18 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void sub_test_list()
{
    std::cout << "\nsubject tests with List:" << std::endl;
    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << mstack.back() << std::endl;

    mstack.pop_back();

    std::cout << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);

    //[...]
    mstack.push_back(0);

    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(mstack);
}

void sub_test()
{
    std::cout << "\nsubject tests:" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);

}

void my_test() {
    std::cout << "\nmy own tests tests:" << std::endl;
    MutantStack<std::string> my_stack;

    my_stack.push("test");
    my_stack.push("hello");
    my_stack.push("world");

    std::cout << my_stack.top() << std::endl;
    
    my_stack.pop();
    
    std::cout << my_stack.size() << std::endl;

    const MutantStack<std::string>::iterator const_it = my_stack.begin();
    std::cout << *const_it << std::endl;
    
    MutantStack<std::string>::iterator it;
    
    std::cout << "\nPrintig the full content of stack....\n";
    for (it = my_stack.begin(); it != my_stack.end(); it++) {
        std::cout << *it << std::endl;
    }
}

int main() {
    sub_test();
    sub_test_list();
    my_test();
    return 0;
}

