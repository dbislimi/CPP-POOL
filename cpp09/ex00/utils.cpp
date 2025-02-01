/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:37:31 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/01 20:06:35 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	split(std::string s, t_strings* strs){
	size_t	coma;
	
	coma = s.find(',');
	if (coma == std::string::npos)
		return (false);
	strs->date = s.substr(0, coma);
	strs->value = s.substr(coma + 1);
	return (true);
}
