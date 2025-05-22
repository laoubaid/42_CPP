/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:00:49 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/04 17:37:25 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl obj;

    obj.complain("INFO");
    obj.complain("ERROR");
    obj.complain("WARNING");
    obj.complain("DEBUG");
    return 0;
}
