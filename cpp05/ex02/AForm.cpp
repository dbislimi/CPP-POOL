/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:58:06 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:48:56 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char*	AForm::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _sign(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& instance) : _name(instance._name), _sign(0), _gradeToSign(instance._gradeToSign), _gradeToExec(instance._gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

AForm::~AForm(){
}

AForm&	AForm::operator=(const AForm& instance){
	(void)instance;
	return (*this);
}

std::string	AForm::getName() const{
	return (this->_name);
}

bool	AForm::getSign() const{
	return (this->_sign);
}

int		AForm::getGradeToSign() const{
	return (this->_gradeToSign);
}

int		AForm::getGradeToExec() const{
	return (this->_gradeToExec);
}

std::ostream&	operator<<(std::ostream& output, const AForm& instance){
	if (instance.getSign() == 1)
		output << "AForm \"" << instance.getName() << "\": grade to sign=" << instance.getGradeToSign()
			<< ", grade to execute=" << instance.getGradeToExec() << ", status: signed";
	else
		output << "AForm \"" << instance.getName() << "\": grade to sign=" << instance.getGradeToSign()
			<< ", grade to execute=" << instance.getGradeToExec() << ", status: not signed";
	return (output);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_sign = 1;
	else
		throw GradeTooLowException();
}
