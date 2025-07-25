/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:49:51 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/25 17:39:56 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isvalid(std::string str) {
    std::string numbers("0123456789");

    for (size_t i = 0; i < str.size(); i++) {
        if (numbers.find(str[i]) == std::string::npos)
            return false;
    }
    return true;

}

int check_if_sorted(std::vector<unsigned int> data, size_t dsize) {
    if (data.size() != dsize) {
        std::cout << "\033[1;31mMissing elements\033[0m\n"; // Red bold
        return 0;
    }

    for (int i = 0; i < static_cast<int>(data.size()) - 1; i++) {
        if (data[i] > data[i + 1]) {
            std::cout << "\033[1;31mNot sorted\033[0m\n"; // Red bold
            return 0;
        }
    }
    std::cout << "\033[1;32mSorted\033[0m\n"; // Green bold
    return 1;
}
