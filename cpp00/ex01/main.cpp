/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:25:02 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/07 14:39:13 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string buff;
	PhoneBook repository;
	
	while (true)
	{
		
		std::cout << std::endl << "Please enter a valid command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, buff);
		buff = trim(buff);
		if (buff == "EXIT")
			break ;
		else if (buff == "ADD")
			repository.add();
		else if (buff == "SEARCH")
			repository.search();
	}
	return (0);
}
