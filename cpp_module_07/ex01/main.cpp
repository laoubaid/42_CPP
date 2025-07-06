/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:16:55 by laoubaid          #+#    #+#             */
/*   Updated: 2025/07/03 01:41:14 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArr[] = {1, 2, 3, 4};
    std::string strArr[] = {"one", "two", "three"};

    iter(intArr, 4, func);
    iter(strArr, 3, func);

    return 0;
}