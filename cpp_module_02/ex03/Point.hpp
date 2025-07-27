/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:11:29 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 01:33:36 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const Point &src);
        Point(Fixed const &p1, Fixed const &p2);
        ~Point();
        Point & operator=(const Point &src);
        Fixed get_x() const;
        Fixed get_y() const;
};

std::ostream& operator<<(std::ostream& os, const Point& pt);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
