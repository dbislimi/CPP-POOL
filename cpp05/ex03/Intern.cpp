/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:00:48 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/13 18:35:59 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern& instance){
	(void)instance;
}

Intern::~Intern(){
}

Intern&	Intern::operator=(const Intern& instance){
	(void)instance;
	return (*this);
}


AForm*	Intern::newPresidentialPardon(std::string target){
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::newRobotomyRequest(std::string target){
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::newShrubberyCreation(std::string target){
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target){
	typedef AForm*(Intern::*Forms)(std::string target);
	Forms	newForm[3] = {&Intern::newShrubberyCreation, &Intern::newRobotomyRequest, &Intern::newPresidentialPardon};
	std::string	names[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
	std::string trim = myTrim(name);
	
	if (trim == ""){
		std::cout << "Intern cannot read your mind, please be specific." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < 3; ++i){
		if (trim == names[i])
			return ((this->*newForm[i])(target));
	}
	std::cout << "Making a " << name << " form is not part of intern's skills." << std::endl;
	return (NULL);
}

std::string	myTrim(std::string& str){
	size_t		first = 0;
	size_t		last = 0;
	std::string	trim = "";
	size_t		len;
	
	while (1){
		first = str.find_first_not_of(" \t\n", last);
		if (first == std::string::npos)
			break ;
		last = str.find_first_of(" \n\t", first);
		trim += str.substr(first, last - first);
	}
	len = trim.length();
	for (size_t i = 0; i < len; ++i)
		trim[i] = std::tolower(trim[i]);
	return (trim);
}
