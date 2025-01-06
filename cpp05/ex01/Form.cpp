/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:58:06 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:09:10 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char*	Form::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _sign(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& instance) : _name(instance._name), _sign(0), _gradeToSign(instance._gradeToSign), _gradeToExec(instance._gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

Form::~Form(){
}

Form&	Form::operator=(const Form& instance){
	(void)instance;
	return (*this);
}

std::string	Form::getName() const{
	return (this->_name);
}

bool	Form::getSign() const{
	return (this->_sign);
}

int		Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int		Form::getGradeToExec() const{
	return (this->_gradeToExec);
}

std::ostream&	operator<<(std::ostream& output, const Form& instance){
	if (instance.getSign() == 1)
		output << "Form \"" << instance.getName() << "\": grade to sign=" << instance.getGradeToSign()
			<< ", grade to execute=" << instance.getGradeToExec() << ", status: signed";
	else
		output << "Form \"" << instance.getName() << "\": grade to sign=" << instance.getGradeToSign()
			<< ", grade to execute=" << instance.getGradeToExec() << ", status: not signed";
	return (output);
}

void	Form::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_sign = 1;
	else
		throw GradeTooLowException();
}
