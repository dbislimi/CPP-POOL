/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:26:35 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/02 00:26:26 by dbislimi         ###   ########.fr       */
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
		this->_data[strs.date] = atof(strs.value.c_str());
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

void	BitcoinExchange::findDate(const std::string& date){
	size_t	first;
	size_t	second;
	int	YMD[3];

	first = date.find_first_of('-');
	second = date.find_last_of('-');
	if (first != 4 || second - first != 3 || date.find_last_of("0123456789") != 9){
		std::cout << "invalid date format" << std::endl;
	}
	YMD[0] = atoi(date.substr(0, first).c_str());
	YMD[1] = atoi(date.substr(first + 1, second).c_str());
	YMD[2] = atoi(date.substr(second + 1).c_str());
	std::cout << "date: " << YMD[0] << " - " << YMD[1] << " - " << YMD[2] << std::endl;
}

void	BitcoinExchange::analyse(std::string filename){
	std::map<std::string, float>::iterator	it;
	std::ifstream	file;
	std::string		buff;
	t_strings		strs;

	file.open(filename.c_str());
	if (file.fail())
		throw std::exception();
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
		std::cout << atof(strs.value.c_str()) << std::endl;
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
		// it = this->_data.find(strs.date);
		// if (it == _data.end())
		// 	continue ;
		// this->findDate(it->first);
		// std::cout << it->first << " " << it->second << std::endl;
		// std::cout << '[' << strs.date << ']' << std::endl << '['<< strs.value << ']' << std::endl;
	}
}
