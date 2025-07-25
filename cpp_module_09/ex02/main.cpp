/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:22:48 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/25 22:41:39 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    
    std::vector<unsigned int> vec_data;
    std::vector<unsigned int> deq_data;

    for (int i = 1; i < ac; i++) {
        if (!isvalid(av[i])) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        vec_data.push_back(std::strtol(av[i], NULL, 10));
        deq_data.push_back(std::strtol(av[i], NULL, 10));
    }

    size_t dsize = vec_data.size();

    printVec(vec_data, "Before:");
    std::clock_t start = std::clock();
    mergInsert(vec_data);
    std::clock_t end = std::clock();
    printVec(vec_data, "After:");
    double vec_duration = static_cast<double>(end - start);

    start = std::clock();
    mergInsert(deq_data);
    end = std::clock();

    double deq_duration = static_cast<double>(end - start);

    std::cout << "Time to process a range of " << dsize << " elements with std::vector : " << vec_duration << " us" << std::endl;
    std::cout << "Time to process a range of " << dsize << " elements with std::deque : " << deq_duration << " us" << std::endl;


    // check_if_sorted(vec_data, dsize);

    return 0;
}