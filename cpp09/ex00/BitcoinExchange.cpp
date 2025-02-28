/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:26:35 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/28 17:48:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(std::string filename){
	std::ifstream	file;
	std::string		buff;
	t_strings		strs;
	
	
	if (std::string(filename.c_str() + filename.length() - 4) != ".csv")
		throw BitcoinExchange::DataFilename();
	file.open(filename.c_str());
	if (file.fail())
		throw std::exception();
	while (1){
		buff.clear();
		std::getline(file, buff);
		if (file.eof() && buff.empty())
			break ;
		if (!split(buff, ',', &strs))
			throw BitcoinExchange::DataFile();
		if (strs.date == "date")
			continue ;
		if (!isValidDate(strs.date))
			throw BitcoinExchange::InvalidDate();
		this->_content += buff;
		this->_data[date_to_int(strs.date)] = atof(strs.value.c_str());
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

void	BitcoinExchange::analyse(std::string filename){
	std::map<int, float>::iterator	it;
	std::ifstream	file;
	std::string		buff;
	t_strings		strs;

	file.open(filename.c_str());
	if (file.fail()){
		std::cout << "Error: Failed to analyse " << filename << std::endl;
		return ;
	}
	while (1){
		buff.clear();
		std::getline(file, buff);
		if (file.eof() && buff.empty())
			break ;
		if (!split(buff, '|', &strs)){
			std::cout << "Error: bad input => " << buff << std::endl;
			continue ;
		}
		if (strs.date == "date")
			continue ;
		if (!isValidDate(strs.date)){
			std::cout << "Error: invalid date => " << buff << std::endl;
			continue ;
		}
		if (!isFloat(strs.value)){
			if (atof(strs.value.c_str()) < 0){
				std::cout << "Error: not a positive number." << std::endl;
				continue ;
			}
			else if (atof(strs.value.c_str()) > 1000){
				std::cout << "Error: too large number." << std::endl;
				continue ;
			}
		}
		int	date = date_to_int(strs.date);
		it = this->_data.lower_bound(date);
		if ((*it).first != date && it != _data.begin())
			--it;
		else if ((*it).first != date){
			std::cout << "Error: no matching date found in BE for " << buff << std::endl;
			continue ;
		}
		std::cout << strs.date << " => " << strs.value << " = " << atof(strs.value.c_str()) * it->second << std::endl;
	}
}
