/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:49:55 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/25 22:40:55 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

bool    isvalid(std::string str);
int     check_if_sorted(std::vector<unsigned int> data, size_t dsize) ;

template <typename T>
void printVec(const T& vec, std::string msg) {
    std::cout << msg ;//<< "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout  << " " << vec[i];
        // if (i != vec.size() - 1)
        //     std::cout << ",";
    }
    // std::cout << "]"; 
    std::cout << std::endl;
}

template <typename T>
void    binaryInsert(T &main_chain, unsigned int &tmp) {
    // std::cout << "inserting " << tmp << std::endl;
    typename T::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), tmp);
    main_chain.insert(pos, tmp);
}

template <typename T>
void jacobBinaryInsert(T &mainc, T &pendc) {
    size_t n = pendc.size();
    if (n == 0)
        return;

    T t_vals;
    for (size_t k = 1; ; ++k) {
        unsigned int tk = (std::pow(2, k + 1) + ((k % 2 == 0) ? 1 : -1)) / 3;
        if (tk >= n) {
            // std::cout << "---------------> TK:" << tk << std::endl;
            t_vals.push_back(n);
            break;
        }
        t_vals.push_back(tk);
    }
    binaryInsert(mainc, pendc[0]);
    for (size_t i = 1; i < t_vals.size(); i++) {
        for (unsigned int j = t_vals[i]; j > t_vals[i - 1]; j--) {
            binaryInsert(mainc, pendc[j - 1]);
        }
    }
}

template <typename T>
void mergInsert(T &data) {
    T main_chain;
    T pend_chain;
    std::vector< std::pair<unsigned int, unsigned int> > paires;

    unsigned int tmp = 0;
    size_t n = data.size();
    
    if (data.size() == 1)
        return ;

    typename T::iterator it = data.begin();
    while (it != data.end()) {
        unsigned int first = *it;
        it++;
        unsigned int second = *it;
        if (it == data.end())
            break;
        it--;

        if (first > second)
            std::swap(first, second);

        paires.push_back(std::pair<unsigned int, unsigned int>(first, second));
        main_chain.push_back(second);
        pend_chain.push_back(first);

        ++it;
        ++it;
    }

    if (n % 2)
        tmp = data[n - 1];  
    // printVec(main_chain, "\nMain 1: ");
    // printVec(pend_chain, "Pend 1: ");
    mergInsert(main_chain);
    jacobBinaryInsert(main_chain, pend_chain);
    // printVec(main_chain, "\nMain 2: ");
    if (n % 2)
        binaryInsert(main_chain, tmp);
    // printVec(main_chain, "\nMain 3: ");
    data = main_chain;
}

#endif
