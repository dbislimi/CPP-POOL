/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:37:30 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 16:49:00 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 72, 45), _target(target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& instance){
	if (this == &instance)
		return (*this);
	this->_target = instance._target;
	return (*this);
}

void	PresidentialPardonForm::exec() const{
	if (this->getSign() == false)
		throw AForm::FormNotSignedException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblerox." << std::endl;
}