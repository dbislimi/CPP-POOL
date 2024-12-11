/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:31:25 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 19:23:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

void	replace(std::string content, std::string name, std::string s1, std::string s2)
{
	std::ofstream replaced(name + ".replace");

	std::string::find(s2);

}
int	main(int ac, char **av)
{
	std::string		name;
	std::string		content;
	std::ifstream	file;
	
	if (ac != 4){
		std::cerr << "Error: missing arguments." << std::endl;
		return (1);
	}
	File	MyFile(av[1]);
	if (!MyFile.isFound())
		
	name = av[1];
	file.open(name);
	if (!file)
	{
		std::cerr << "Error: cannot open " << name << "." << std::endl;
		return (1);
	}
	content.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	replace(content, name, av[2], av[3]);
}
