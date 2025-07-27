/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:17:18 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/07 10:07:50 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename P>
void func(P& a)
{
    std::cout << a << std::endl;
}

template <typename T>
void iter(T* arr, size_t len, void (*fptr)(T&))
{
    for (size_t i = 0; i < len; i++) {
        fptr(arr[i]);
    }
}

#endif
