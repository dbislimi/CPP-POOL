/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:25:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 14:37:15 by dbislimi         ###   ########.fr       */
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
	(void)instance;
	return (*this);
}

std::string const& AMateria::getType() const{
	return (this->_type);
}

void	AMateria::use(ICharacter& target){
	std::cout << "AMateria use called on " << target.getName() << "." << std::endl;
}
