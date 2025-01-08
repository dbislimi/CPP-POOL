/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:37:30 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 16:48:44 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& instance){
	if (this == &instance)
		return (*this);
	this->_target = instance._target;
	return (*this);
}

void	RobotomyRequestForm::exec() const{
	if (this->getSign() == false)
		throw AForm::FormNotSignedException();

	int	i = rand() % 2;
	std::cout << "Drrrrrrr.. ";

	switch (i){
		case 0:
			std::cout << this->_target << " has been robotomized successfully.🎉";
			break;
		
		case 1:
			std::cout << "krrkrkr.. robotomy failed ...";
			break;
	}
	std::cout << std::endl;
}