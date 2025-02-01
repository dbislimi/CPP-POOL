/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:37:31 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/02 00:13:23 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	split(std::string s, char c, t_strings* strs){
	size_t	coma;
	
	coma = s.find(c);
	if (coma == std::string::npos)
		return (false);
	strs->date = s.substr(0, coma);
	strs->value = s.substr(coma + 1);
	strs->date = strs->date.substr(strs->date.find_first_not_of(" \n"), strs->date.find_last_not_of(" \n") + 1);
	strs->value = strs->value.substr(strs->value.find_first_not_of(" \n"), strs->value.find_last_not_of(" \n") + 1);
	return (true);
}

bool	isValidDate(const std::string& date){
	size_t	first;
	size_t	second;
	int	YMD[3];

	first = date.find_first_of('-');
	second = date.find_last_of('-');
	// std::cout << date << std::endl;
	if (first != 4 || second - first != 3 || date.find_last_of("0123456789") != 9)
		return (false);
	YMD[0] = atoi(date.substr(0, first).c_str());
	YMD[1] = atoi(date.substr(first + 1, second).c_str());
	YMD[2] = atoi(date.substr(second + 1).c_str());
	if (YMD[1] > 12 || YMD[2] > 31 || YMD[0] <= 0 || YMD[1] <= 0 || YMD[2] <= 0)
		return (false);
	if ((YMD[1] == 4 || YMD[1] == 6 || YMD[1] == 9 || YMD[1] == 11) && YMD[2] > 30)
		return (false);
	if (YMD[1] == 2){
		if (YMD[0] % 4 == 0 && (YMD[0] % 100 != 0 || (YMD[0] % 100 == 0 && YMD[0] % 400 == 0))){
			if (YMD[2] > 29)
				return (false);
		}
		else if (YMD[2] > 28)
			return (false);
	}
	return (true);
}

bool	isFloat(std::string &str){
	size_t	len = str.length();
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
	return (coma);
}
