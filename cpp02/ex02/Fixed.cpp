/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 14:12:34 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int toConvert) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed = toConvert * (1 << this->bits);
}

Fixed::Fixed(const float toConvert) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(toConvert * (1 << this->bits));
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

bool	Fixed::operator>(const Fixed &toCompare) const
{
	return (this->getRawBits() > toCompare.getRawBits());
}

bool	Fixed::operator<(const Fixed &toCompare) const
{
	return (this->getRawBits() < toCompare.getRawBits());
}

bool	Fixed::operator>=(const Fixed &toCompare) const
{
	return (this->getRawBits() >= toCompare.getRawBits());
}

bool	Fixed::operator<=(const Fixed &toCompare) const
{
	return (this->getRawBits() <= toCompare.getRawBits());
}

bool	Fixed::operator==(const Fixed &toCompare) const
{
	return (this->getRawBits() == toCompare.getRawBits());
}

bool	Fixed::operator!=(const Fixed &toCompare) const
{
	return (this->getRawBits() != toCompare.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &toCalcul)
{
	return (Fixed(this->toFloat() + toCalcul.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &toCalcul)
{
	return (Fixed(this->toFloat() - toCalcul.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &toCalcul)
{
	return (Fixed(this->toFloat() * toCalcul.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &toCalcul)
{
	return (Fixed(this->toFloat() / toCalcul.toFloat()));
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (this->fixed / (1 << this->bits));
}

std::ostream	&operator<<(std::ostream &output, const Fixed &instance)
{
	output << instance.toFloat();
	return (output);
}
