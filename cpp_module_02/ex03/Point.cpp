/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:18:43 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/10 01:36:48 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(Fixed const &p1, Fixed const &p2): x(p1), y(p2) {}

Point::~Point() {}

Point::Point(const Point &src) {
    *this = src;
}

Point& Point::operator=(const Point & src)
{
    if (this != &src)
    {
        this->x = src.x;
        this->y = src.y;
    }
    return *this;
}

Fixed Point::get_x() const {
    return this->x;
}

Fixed Point::get_y() const {
    return this->y;
}

std::ostream& operator<<(std::ostream& os, const Point& pt) {
    os << "(" << pt.get_x() << "," << pt.get_y() << ")";

    return os;
}
