/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:06:55 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:14:34 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter& instance){
	(void)instance;
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& instance){
	(void)instance;
	return (*this);
}

void	ScalarConverter::convert(std::string str){
	float	f = std::atof(str.c_str());
	std::cout << "char: " << static_cast<char>(f) << std::endl
				<< "int: " << static_cast<int>(f) << std::endl
				<< "float: " << (f) << std::endl
				<< "double: " << static_cast<double>(f) << std::endl;
} // UTILISER AFTOL (ATOI POUR FLOAT) ET APRES TOUT CAST