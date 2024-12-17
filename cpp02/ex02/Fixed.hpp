/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:46 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/17 19:31:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	private:
	
		int					fixed;
		static const int	bits = 8;
	
	public:

		Fixed(void);
		Fixed(const Fixed &toCopie);
		Fixed(const int toConvert);
		Fixed(const float toConvert);
		~Fixed(void);

		Fixed	&operator=(const Fixed &toCopie);
		bool	operator>(const Fixed &toCompare) const;
		bool	operator<(const Fixed &toCompare) const;
		bool	operator>=(const Fixed &toCompare) const;
		bool	operator<=(const Fixed &toCompare) const;
		bool	operator==(const Fixed &toCompare) const;
		bool	operator!=(const Fixed &toCompare) const;
		Fixed	operator+(const Fixed &toCalcul);
		Fixed	operator-(const Fixed &toCalcul);
		Fixed	operator*(const Fixed &toCalcul);
		Fixed	operator/(const Fixed &toCalcul);
		Fixed	&operator++(void);
		Fixed	&operator++(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &instance);

#endif