/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:47:33 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 18:32:54 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat bc1("david");
		std::cout << bc1 << std::endl;
		bc1.downgrade();
		std::cout << bc1 << std::endl;
	}
	catch(std::exception& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	try{
		Bureaucrat	bc2("James");
		std::cout << bc2 << std::endl;
		bc2.upgrade(149);
		std::cout << bc2 << std::endl;
		bc2.upgrade();
	}
	catch(std::exception& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}