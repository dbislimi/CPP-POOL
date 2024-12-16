/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/16 18:40:07 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopie) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopie;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &toCopie)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &toCopie)
		return (*this);
	this->fixed = toCopie.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}
