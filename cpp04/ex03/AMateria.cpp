/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:25:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 10:35:04 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(std::string const& type) : _type(type){
}

AMateria::AMateria(const AMateria& instance) : _type(instance._type){
}

AMateria::~AMateria(){
}

AMateria&	AMateria::operator=(const AMateria& instance){
	if (this == &instance)
		return (*this);
	this->_type = instance._type;
	return (*this);
}

std::string const& AMateria::getType() const{
	return (this->_type);
}