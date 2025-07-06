/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 02:15:47 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/05 18:55:48 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>


class Span
{
    private:
        std::vector<int>    mem;
        unsigned int        max_n;
    public:
        Span(unsigned int n);
        Span(const Span& obj);
        Span&   operator=(const Span& obj);
        ~Span();

        void    addNumber(int nbr);
        int     longestSpan();
        int     shortestSpan();
        void    range_fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
