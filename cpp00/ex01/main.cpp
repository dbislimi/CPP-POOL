/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:25:02 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/06 17:44:45 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string buff;
	PhoneBook repository;
	
	while (true)
	{
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
