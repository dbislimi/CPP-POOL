/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:25:13 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 16:48:12 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance) : AForm("ShrubberyCreationForm", 145, 137), _target(instance._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& instance){
	if (this == &instance)
		return (*this);
	this->_target = instance._target;
	return (*this);
}

void	ShrubberyCreationForm::exec() const{
	if (this->getSign() == false)
		throw AForm::FormNotSignedException();
		
	std::ofstream	file((this->_target + "_shrubbery").c_str());

	if (!file){
		std::cerr << "Error: couldn't create " + this->_target + "_shrubbery file." << std::endl;
		return ;
	}
	file <<"               ,@@@@@@@," 				<< std::endl
		<<"       ,,,.   ,@@@@@@/@@,  .oo8888o. "	<< std::endl
		<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"	<< std::endl
		<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"<< std::endl
		<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<< std::endl
		<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"	<< std::endl
		<<"   `&%\\ ` /%&\'    |.|        \\ \'|8\'"<< std::endl
		<<"       |o|        | |         | |"		<< std::endl
		<<"       |.|        | |         | |"		<< std::endl
		<<"     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_"<< std::endl;
	
}