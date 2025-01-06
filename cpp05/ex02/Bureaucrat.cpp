/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:32:00 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:18:39 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150){
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& instance) : _name(instance._name), _grade(instance._grade){
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& instance){
	if (this == &instance)
		return (*this);
	this->_grade = instance.getGrade();
	return (*this);
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

const std::string&	Bureaucrat::getName() const{
	return (this->_name);
}

Bureaucrat&	Bureaucrat::operator+=(int n){
	this->_grade += n;
	return (*this);
}

Bureaucrat&	Bureaucrat::operator-=(int n){
	this->_grade -= n;
	return (*this);
}

void	Bureaucrat::upgrade(int grade){
	if (this->_grade - grade < 1)
		throw GradeTooHighException();
	*this -= grade;
}

void	Bureaucrat::downgrade(int grade){
	if (this->_grade + grade > 150)
		throw GradeTooLowException();
	*this += grade;
}

std::ostream&	operator<<(std::ostream& output, const Bureaucrat& instance){
	output << "Bureaucrat \"" << instance.getName() << "\": grade " << instance.getGrade() << ".";
	return (output);
}

void	Bureaucrat::signForm(AForm& form) const{
	try{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e){
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}