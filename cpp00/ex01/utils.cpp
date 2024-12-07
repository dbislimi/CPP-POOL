/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:49:16 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/07 16:20:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

std::string	trim(const std::string& str)
{
	size_t	firstLetter;
	size_t	lastLetter;

	firstLetter = str.find_first_not_of(" \t");
	if (firstLetter == std::string::npos)
		return ("");
	lastLetter = str.find_last_not_of(" \t");
	return (str.substr(firstLetter, lastLetter - firstLetter + 1));
}

std::string	shorten(std::string &str, size_t size)
{
	std::string	shorted;
	
	shorted = "";
	if (str.size() <= size)
		return (str);
	shorted = str.substr(0, size - 1);
	shorted += '.';
	return (shorted);
}

bool	isnum(std::string &str)
{
	size_t	size;
	size_t	i;
	
	size = str.length();
	i = -1;
	if (str[0] == '+' || str[0] == '-')
		i = 0;
	while (++i < size)
		if (!isdigit(str[i]))
			return (false);
	return (true);
}

bool	isalnumstr(std::string &str)
{
	size_t	size;

	size = str.length();
	for (size_t	i = 0; i < size; ++i)
		if (!isalnum(str[i]))
			return (false);
	return (true);
}
