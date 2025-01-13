/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:56:56 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/13 16:28:24 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	private:
		Intern(const Intern& instance);
		Intern&	operator=(const Intern& instance);
		
	public:
		Intern();
		~Intern();

		AForm*	makeForm(std::string form, std::string target);
		AForm*	newPresidentialPardon(std::string target);
		AForm*	newRobotomyRequest(std::string target);
		AForm*	newShrubberyCreation(std::string target);
};

std::string	myTrim(std::string& str);