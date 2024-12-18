/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:23 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/18 17:36:35 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): fixed(0) {
}

Fixed::Fixed(const int toConvert) {
	this->fixed = toConvert * (1 << this->bits);
}

Fixed::Fixed(const float toConvert) {
	this->fixed = roundf(toConvert * (1 << this->bits));
}

Fixed::Fixed(const Fixed &toCopie) {
	*this = toCopie;
}

Fixed::~Fixed(void) {
}

Fixed	&Fixed::operator=(const Fixed &toCopie)
{
	if (this == &toCopie)
		return (*this);
	this->setRawBits(toCopie.getRawBits());
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

Fixed	Fixed::operator+(const Fixed &toCalcul) const
{
	return (Fixed(this->toFloat() + toCalcul.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &toCalcul) const
{
	return (Fixed(this->toFloat() - toCalcul.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &toCalcul) const
{
	return (Fixed(this->toFloat() * toCalcul.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &toCalcul) const
{
	return (Fixed(this->toFloat() / toCalcul.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	++this->fixed;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	
	++this->fixed;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	--this->fixed;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	
	--this->fixed;
	return (temp);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
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
