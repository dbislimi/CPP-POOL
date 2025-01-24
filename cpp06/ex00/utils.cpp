/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:44:37 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/24 17:18:17 by dbislimi         ###   ########.fr       */
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

bool	isNum(std::string &str, size_t len)
{
	bool	sign = false;
	bool	coma = false;
	
	for (size_t i = 0; i < len; ++i){
		if (isdigit(str[i]))
				continue ;
		else if ((str[i] == '+' || str[i] == '-') && sign == false)
			sign = true;
		else if (str[i] == '.' && coma == false)
			coma = true;
		else if (i == len - 1 && str[i] == 'f')
				continue ;
		else
			return (false);
	}
	return (true);
}