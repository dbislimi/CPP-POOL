/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:43:09 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/19 15:32:51 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const Fixed	triangleArea(const Point &a, const Point &b, const Point &c)
{
	return ((((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())).abs_f()) / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	bigAera(triangleArea(a, b, c));
	Fixed	aera1(triangleArea(a, b, point));
	Fixed	aera2(triangleArea(a, c, point));
	Fixed	aera3(triangleArea(b, c, point));
	
	return(!(aera1 == 0 || aera2 == 0 || aera3 == 0) && bigAera == (aera1 + aera2 + aera3));
}
