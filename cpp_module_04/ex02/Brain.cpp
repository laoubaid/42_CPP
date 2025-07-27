/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:57:01 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/16 17:52:28 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "- Brain Constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "- Brain destructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "- Brain Copy Constructor!" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << "- Brain Assignation operator!" << std::endl;
    if (this != &copy) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdeas(int idx, std::string &idea) {
    if (idx >= 0 && idx < 100)
        this->ideas[idx] = idea;
}
