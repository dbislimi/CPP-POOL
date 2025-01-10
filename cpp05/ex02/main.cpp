/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:40:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/10 15:40:47 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(){
	AForm* form[3];
	Bureaucrat	b1("mahdi");
	Bureaucrat	b2("Billel");
	Bureaucrat	b3("yahya");
	form[0] = new ShrubberyCreationForm("home");
	form[1] = new RobotomyRequestForm("bilel");
	form[2] = new PresidentialPardonForm("Dylan");
	
	b1.upgrade(13);
	std::cout << b1.getName() << " is now.getGrade();

	delete form;
	return (0);
}