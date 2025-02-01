/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:21:49 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/01 20:28:25 by dbislimi         ###   ########.fr       */
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
		BitcoinExchange();

	public:
		BitcoinExchange(std::string filename);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& instance);

		// void	ana

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
};

typedef struct s_strings
{
	std::string	date;
	std::string	value;
}	t_strings;

bool	split(std::string s, t_strings* strs);

#endif