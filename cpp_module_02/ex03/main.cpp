/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:47:35 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 01:36:14 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void is_inside(Point const a, Point const b, Point const c, Point const point)
{
    if (bsp(a, b, c, point))
        std::cout << "the point " << point << " is INside the tringle\n";
    else
        std::cout << "the point " << point << " is OUTside the tringle\n";
}

int main( void ) {
    Point a(0, 0);
    Point b(2, 0);
    Point c(1, 3);
    Point point(0.5f, 1.5f);
    
    Point x(0, 0);
    Point y(2, 0);
    Point z(1, 3);
    Point point2(0.49f, 1.5f);

    is_inside(a, b, c, point);
    is_inside(x, y, z, point2);

    return 0;
}
