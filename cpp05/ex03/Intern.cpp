/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:00:48 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/10 18:17:26 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"



Intern::Intern(){
}

Intern::Intern(const Intern& instance){
}

Intern::~Intern(){
}

Intern&	Intern::operator=(const Intern& instance){
	(void)instance;
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target){
	std::string	names[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
	name.trim
}