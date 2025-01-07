/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:44:47 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/07 16:51:40 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& instance) : AMateria(instance._type){
}

Cure::~Cure(){
}

Cure&	Cure::operator=(const Cure& instance){
	return (*this);
}

AMateria* Cure::clone() const{
	return (new Cure());
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *";
}
