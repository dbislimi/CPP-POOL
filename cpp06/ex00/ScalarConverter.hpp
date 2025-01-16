/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:00:48 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/16 17:13:14 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <climits>

class ScalarConverter {
	private:
		ScalarConverter&	operator=(const ScalarConverter& instance);
		ScalarConverter(const ScalarConverter& instance);
		ScalarConverter();
		
	public:
		~ScalarConverter();
		
		static void	convert(std::string str);
};

bool	isNaN(std::string& str);
bool	isnum(std::string &str);

#endif