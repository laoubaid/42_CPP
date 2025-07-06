/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:56:43 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/04 02:12:07 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include "easyfind.hpp"

int main() {
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        
        std::cout << "Vector test:\n";
        try {
            if (easyfind(v, 3) != v.end())
                std::cout << "[v] value found!" << std::endl;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
        
        try {
            if (easyfind(v, 7) != v.end())
                std::cout << "[v] value found!" << std::endl;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);

        std::cout << "List test:\n";
        try {
            if (easyfind(l, 0) != l.end())
                std::cout << "[v] value found!" << std::endl;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }

        try {
            if (easyfind(l, 2) != l.end())
                std::cout << "[v] value found!" << std::endl;
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }

    {
            std::set<int> s;
            s.insert(10);
            s.insert(20);
            s.insert(30);

            std::cout << "Set test:\n";
            try {
                if (easyfind(s, 20) != s.end())
                    std::cout << "[set] value found!\n";
            } catch (const std::exception& e) {
                std::cerr << e.what() << '\n';
            }

            try {
                if (easyfind(s, 40) != s.end())
                    std::cout << "[set] value found!\n";
            } catch (const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
    }

    return 0;
}

