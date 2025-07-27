/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:31:39 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/14 23:25:47 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap s;
    FragTrap c(s);

    s = c;
    s.attack(std::string("test"));
    c.highFivesGuys();

    return 1;
}
