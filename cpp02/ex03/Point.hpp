/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:40:55 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/19 13:53:40 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point{

	private:

		const Fixed	x;
		const Fixed	y;
		Point &operator=(const Point &other);
		
	public:

		Point(void);
		Point(const float x, const float y);
		~Point(void);
		Point(const Point &other);

		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

};

const Fixed	triangleArea(const Point &a, const Point &b, const Point &c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif