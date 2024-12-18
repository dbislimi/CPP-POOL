/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:51:07 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 17:01:10 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0){}

Point::Point(const float x, const float y): x(x), y(y){}

Point::Point(const Point &other): x(other.x), y(other.y){}

Point::~Point(void){}

float	Point::triangleArea(Point &a,  Point &b,  Point &c)
{
	return (abs(1/2 * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y))));
}
