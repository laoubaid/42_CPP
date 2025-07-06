/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 01:08:34 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/04 02:04:34 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
typename T::iterator easyfind(T& cont, int n) {
    typename    T::iterator itr = std::find(cont.begin(), cont.end(), n);

    if (itr == cont.end())
        throw std::runtime_error("[!] value not found!");
    return itr;
}

#endif
