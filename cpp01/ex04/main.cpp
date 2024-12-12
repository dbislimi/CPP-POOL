/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:31:25 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/12 19:49:14 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

// void	replace(std::string content, std::string name, std::string s1, std::string s2)
// {
// 	std::ofstream replaced(name + ".replace");

// 	std::string::find(s2);

// }

int	main(int ac, char **av)
{
	if (ac != 4){
		std::cerr << "Error: missing arguments." << std::endl;
		return (1);
	}
	
	std::string	name;
	std::string	s1(av[2]);
	std::string	s2(av[3]);
	File		MyFile(av[1]);
		
	name = av[1];
	MyFile.replace(s1, s2);
	MyFile.close();
}
