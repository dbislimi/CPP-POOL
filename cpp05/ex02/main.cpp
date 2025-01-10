/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:40:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/10 17:54:49 by dbislimi         ###   ########.fr       */
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
	b1.executeForm(*form[0]);
	b1.signForm(*form[0]);
	b1.executeForm(*form[0]);
	b1.signForm(*form[1]);
	b1.signForm(*form[2]);
	std::cout << std::endl;
	b2.upgrade(78);
	b2.signForm(*form[0]);
	b2.executeForm(*form[1]);
	b2.upgrade(30);
	b2.signForm(*form[1]);
	b2.executeForm(*form[1]);
	b2.signForm(*form[2]);
	std::cout << std::endl;
	b3.upgrade(145);
	b3.signForm(*form[0]);
	b3.signForm(*form[1]);
	b3.executeForm(*form[2]);
	b3.signForm(*form[2]);
	b3.executeForm(*form[2]);
	for (int i = 0; i < 3; ++i)
		delete form[i];
	return (0);
}
