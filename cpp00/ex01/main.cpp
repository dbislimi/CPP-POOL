/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:25:02 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/17 18:58:08 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string buff;
	PhoneBook repository;
	
	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << std::endl << "Please enter a valid command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, buff);
		buff = trim(buff);
		if (buff == "EXIT" || std::cin.eof())
			break ;
		else if (buff == "ADD")
			repository.add();
		else if (buff == "SEARCH")
			repository.search();
	}
	return (0);
}
