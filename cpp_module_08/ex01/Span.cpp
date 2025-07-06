/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 03:02:57 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/05 19:59:01 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) {
    max_n = n;
}

Span::Span(const Span& obj) {
    mem = obj.mem;
    max_n = obj.max_n;
}

Span& Span::operator=(const Span& obj) {
    if (this != &obj) {
        mem = obj.mem;
        max_n = obj.max_n;
    }
    return *this;
}

Span::~Span() {}


void    Span::addNumber(int nbr) {
    if (mem.size() >= max_n) {
        throw std::runtime_error("You have reached the maximun of integers to be stored!");
    }
    mem.push_back(nbr);
}

int Span::longestSpan() {
    if (mem.size() < 2)
        throw std::runtime_error("Less then two elements!");
    return *std::max_element(mem.begin(), mem.end()) \
    - *std::min_element(mem.begin(), mem.end());
}

int Span::shortestSpan() {
    if (mem.size() < 2)
        throw std::runtime_error("Less then two elements!");
    std::vector<int> copy = mem;
    std::sort(copy.begin(), copy.end());

    size_t  len = copy.size();
    int     span = copy[1] - copy[0];
    for(size_t i = 2; i < len; i++) {
        if (copy[i] - copy[i - 1] < span) {
            span = copy[i] - copy[i - 1];
        }
    }
    return span;
}

void    Span::range_fill(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    size_t len = mem.size();
    std::vector<int>::iterator it;

    for (it = begin; it != end && len < max_n; it++, len++) {
        mem.push_back(*it);
    }
    if (it != end)
        throw std::runtime_error("You have reached the maximun of integers to be stored!");
}
