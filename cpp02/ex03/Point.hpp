/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:40:55 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 17:00:57 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{

	private:

		const Fixed	x;
		 Fixed	y;
		
	public:

		Point(void);
		Point(const float x, const float y);
		~Point(void);
		Point(const Point &other);
		Point &operator=(const Point &other) = delete;

		float	triangleArea(const Point &a, const Point &b, const Point &c);
};

#endif