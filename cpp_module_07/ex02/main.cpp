/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:52:30 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/07 10:45:07 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 27
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    std::cout << "array size is : " << numbers.size() << std::endl;
    srand(time(NULL));
    
    std::cout << "\nread and write access:\n";
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++) {
        std::cout << numbers[i] << std::endl;
    }

    {
        Array<int> test;
        const Array<int> tmp(numbers);
        std::cout << "\nconst access: " << tmp[1] << "\n" << std::endl;
        test = tmp;
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cout << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try {
        numbers[-2] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }

    delete [] mirror;

    return 0;
}
