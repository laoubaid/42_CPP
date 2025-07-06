/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 02:16:26 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/05 20:54:49 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::vector<int> vec;

    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);

    try {
        sp.range_fill(vec.begin(), vec.end());
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    

    return 0;
}


// #include <cstdlib>
// #include <ctime>
// #include "Span.hpp"

// int main() {
//     Span sp(10000);
//     std::srand(std::time(0));

//     try {
//         for (int i = 0; i < 10000; ++i)
//             sp.addNumber(std::rand());
//     } catch (const std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
    

//     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
//     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

//     return 0;
// }

