/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:48:37 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:04:09 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _c('d'), _i(0){
}

Data::Data(char c, int i) : _c(c), _i(i){
}

Data::Data(const Data& instance) : _c(instance._c), _i(instance._i){
}

Data::~Data(){
}

Data&	Data::operator=(const Data& instance){
	if (this == &instance)
		return (*this);
	this->_c = instance._c;
	this->_i = instance._i;

	return (*this);
}

char	Data::getC() const{
	return (this->_c);
}

int	Data::getI() const{
	return (this->_i);
}

std::ostream	&operator<<(std::ostream &output, const Data& instance){
	output << "c: " << instance.getC() << std::endl << "i: " << instance.getI() << std::endl;
	return (output);
}