/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:40:55 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 18:03:41 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{

	private:

		const Fixed	x;
		const Fixed	y;
		
	public:

		Point(void);
		Point(const float x, const float y);
		~Point(void);
		Point(const Point &other);
		Point &operator=(const Point &other) = delete;

		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

};

const Fixed	triangleArea(const Point &a, const Point &b, const Point &c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif