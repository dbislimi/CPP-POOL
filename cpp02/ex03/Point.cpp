/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:51:07 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 18:07:08 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0){}

Point::Point(const float x, const float y): x(x), y(y){}

Point::Point(const Point &other): x(other.x), y(other.y){}

Point::~Point(void){}

const Fixed	Point::getX(void) const
{
	return (this->x);
}

const Fixed	Point::getY(void) const
{
	return (this->y);
}
