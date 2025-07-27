/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:57:32 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 01:27:11 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float triangle_surface_calculator(Point const &p1, Point const &p2, Point const &p3)
{
    float x1 = p1.get_x().toFloat();
    float y1 = p1.get_y().toFloat();
    float x2 = p2.get_x().toFloat();
    float y2 = p2.get_y().toFloat();
    float x3 = p3.get_x().toFloat();
    float y3 = p3.get_y().toFloat();

    float area = std::fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0f;
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float area = triangle_surface_calculator(a, b, c);
    float area1 = triangle_surface_calculator(a, b, point);
    float area2 = triangle_surface_calculator(a, c, point);
    float area3 = triangle_surface_calculator(b, c, point);

    if (area == area1 + area2 + area3)
        return true;
    return false;
}