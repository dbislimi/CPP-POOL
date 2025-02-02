/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:26:35 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/02 21:03:30 by dbislimi         ###   ########.fr       */
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

std::map<std::string, float>::iterator	BitcoinExchange::findMatch(const std::string& date){
	std::map<std::string, float>::iterator	it;
	std::string	str;
	size_t	first;
	size_t	second;
	int		YMD[3];

	first = date.find_first_of('-');
	second = date.find_last_of('-');
	YMD[0] = atoi(date.substr(0, first).c_str());
	YMD[1] = atoi(date.substr(first + 1, second).c_str());
	YMD[2] = atoi(date.substr(second + 1).c_str());
	while (this->_content.find(convert(YMD, 1)) == std::string::npos){
		if (YMD[0] <= 2008)
			return (this->_data.end());
		--YMD[0];
		YMD[1] = 12;
		YMD[2] = 31;
	}
	while (this->_content.find(convert(YMD, 2)) == std::string::npos){
		YMD[0] -= (YMD[1] == 1);
		if (YMD[0] == 2008)
			return (this->_data.end());
		YMD[1] = (YMD[1] + 10) % 12 + 1;
		YMD[2] = 31;
	}
	while (this->_content.find(convert(YMD, 3)) == std::string::npos){
		YMD[0] -= (YMD[1] == 1 && YMD[2] == 1);
		if (YMD[0] == 2008)
			return (this->_data.end());
		if (YMD[2] == 1){
			YMD[1] = (YMD[1] + 10) % 12 + 1;
		}
		YMD[2] = (YMD[2] + 29) % 31 + 1;
	}
	return (this->_data.find(convert(YMD, 3)));
}

void	BitcoinExchange::analyse(std::string filename){
	std::map<std::string, float>::iterator	it;
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
		it = this->_data.find(strs.date);
		if (it == _data.end())
			it = this->findMatch(strs.date);
		if (it == this->_data.end()){
			std::cout << "Error: no matching date found in BE for " << buff << std::endl;
			continue ;
		}
		std::cout << strs.date << " => " << strs.value << " = " << atof(strs.value.c_str()) * it->second << std::endl;
	}
}
