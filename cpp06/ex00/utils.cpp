/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:44:37 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/16 17:01:41 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isNaN(std::string& str){
	std::string nan = "nan";
	
	for (int i = 0; i < 3; ++i){
		if (str[i] == nan[i] || str[i] == toupper(nan[i]))
			if (i == 2)
				return (true);
	}
	return (false);
}

bool	isnum(std::string &str)
{
	size_t	size;
	size_t	i;
	bool	point = false;
	
	size = str.length();
	i = -1;
	if (str[0] == '+' || str[0] == '-')
		i = 0;
	while (++i < size){
		if (!isdigit(str[i])){
			if (str[i] == '.' && point == false){
				point = true;
				continue ;
			}
			else if (i == size - 1 && str[i] == 'f')
				break ;
			return (false);
		}
	}	
	return (true);
}