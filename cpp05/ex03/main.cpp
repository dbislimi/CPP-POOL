/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:40:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/13 16:49:39 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(){
	Bureaucrat	b("charles");
	Intern intern;
	AForm*	form;
	std::string tests[5] = {"Shrubbery Creation", "Robotomy Request",
				 "Presidential Pardon", "Missing launch", ""};
	
	b.upgrade(149);
	for (int i = 0; i < 5; ++i){
		std::cout << std::endl;
		form = intern.makeForm(tests[i], "nobody");
		if (form == NULL)
			continue ;
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	return (0);
}
