/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:21:49 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/02 00:07:57 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>

class BitcoinExchange {
	private:
		std::map<std::string, float>	_data;
		void	findDate(const std::string& date);
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

typedef struct s_date
{
	int	year;
	int	month;
	int	date;
}	t_date;

bool	split(std::string s, char c, t_strings* strs);
bool	isValidDate(const std::string& date);
bool	isFloat(std::string &str);

#endif