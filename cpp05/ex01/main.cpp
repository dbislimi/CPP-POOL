/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:47:33 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:09:59 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	Bureaucrat	bc1("david");
	Form		f1("transfert", 5, 2);
	
	try{
		Form f1("transfert", 151, 2);
		std::cout << f1 << std::endl;
	}
	catch(std::exception& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try{
		Form f1("transfert", 150, -1);
	}
	catch(std::exception& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << bc1 << std::endl << f1 << std::endl;
	
	bc1.signForm(f1);
	bc1.upgrade(145);
	std::cout << bc1 << std::endl;
	bc1.signForm(f1);

	std::cout << f1 << std::endl;
	return (0);
}