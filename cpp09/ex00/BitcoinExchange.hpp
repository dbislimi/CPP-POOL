/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:21:49 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/31 16:28:53 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange {
	private:
		std::map<std::string, int>	_data;
		BitcoinExchange();

	public:
		BitcoinExchange(std::ifstream file);
		~BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& instance);
};

#endif