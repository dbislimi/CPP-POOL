/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:44:52 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 19:40:27 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string filename): _filename(filename),
									found(false)
{
	std::ifstream	file;

	file.open(_filename);
	if (file)
	{
		this->found = true;
		this->content.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	}
	else
		std::cout << "Error: file not found." << std::endl;
}

bool	File::isFound(void) const
{
	return (this->found);
}

void	File::replace(std::string &s1, std::string &s2)
{
	size_t	i;
	std::ofstream	output(this->_filename + ".replace");
	
	if (!isFound())
		return ;
	i = this->content.find(s2);
}