/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:17:18 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/03 01:40:04 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename P> void func(const P& a)
{
    std::cout << a << std::endl;
}

template <typename T> void iter(T* arr, size_t len, void (*fptr)(const T&))
{
    for (size_t i = 0; i < len; i++) {
        fptr(arr[i]);
    }
}

#endif
