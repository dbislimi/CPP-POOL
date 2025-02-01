/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:26:35 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/01 20:30:35 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(std::string filename){
	std::ifstream	file;
	std::string		extension;
	std::string	buff;
	t_strings	strs;
	
	extension = filename.c_str() + filename.length() - 4;
	if (extension != ".csv")
		throw BitcoinExchange::DataFilename();
	file.open(filename.c_str());
	if (file.fail())
		throw std::exception();
	std::getline(file, buff);
	while (1){
		std::getline(file, buff);
		if (file.eof())
			break ;
		if (!split(buff, &strs))
			throw BitcoinExchange::DataFile();
		_data[strs.date] = atof(strs.value.c_str());
	}
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& instance){
	if (this == &instance)
		return (*this);
	this->_data = instance._data;
	return (*this);
}
