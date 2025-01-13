/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:06:55 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/13 18:33:14 by dbislimi         ###   ########.fr       */
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

void	ScalarConverter::convert(int c){
	std::cout << "char: " << static_cast<char>(c) << std::endl
				<< "int: " << c << std::endl
				<< "float: " << static_cast<float>(c) << std::endl
				<< "double: " << static_cast<double>(c) << std::endl;
}