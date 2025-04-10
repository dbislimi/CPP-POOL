/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:21:49 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/28 17:48:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

class BitcoinExchange {
	private:
		std::string						_content;
		std::map<int, float>	_data;
		BitcoinExchange();

	public:
		BitcoinExchange(std::string filename);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& instance);

		void	analyse(std::string filename);

		class DataFile : public std::exception{
			public:
				const char*	what() const throw(){
					return ("Error: Data file is not valid.");
				}
		};
		class DataFilename : public std::exception{
			public:
				const char*	what() const throw(){
					return ("Error: Data filename is not valid.");
				}
		};
		class InvalidDate : public std::exception{
			public:
				const char*	what() const throw(){
					return ("Error: Invalid date in data file");
				}
		};
};

typedef struct s_strings
{
	std::string	date;
	std::string	value;
}	t_strings;

bool	split(std::string s, char c, t_strings* strs);
bool	isValidDate(const std::string& date);
bool	isFloat(std::string &str);
int		date_to_int(std::string str);

#endif