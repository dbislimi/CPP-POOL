/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:06:55 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/24 17:23:00 by dbislimi         ###   ########.fr       */
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

// bool	isZero(std::string& str, size_t len){
// 	bool	coma = false;
	
// 	for (size_t i = 0; i < len; ++i){
// 		if (str[i] == '0')
// 			continue ;
// 		else if (str[i] == ',' && coma == false)
// 			coma = true;
// 		else if (i == len - 1 && str[i] == 'f')
// 			continue ;
// 		else
// 			return (false);
// 	}
// 	return (true);
// }

void	displayChar(std::string& str, float f, size_t len){
	if ((f == 0 && isNum(str, len) == false) || isNaN(str)){
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (static_cast<int>(f) >= 33 && static_cast<int>(f) <= 126){
		std::cout << "char: '" << static_cast<char>(f) << '\'' << std::endl;
		return ;
	}
	else{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: " << static_cast<char>(f) << std::endl;
}

void	displayInt(std::string& str, float f, size_t len){
	if (isNum(str, len)){
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		return ;
	}
	std::cout << "int: impossible" << std::endl;
}

void	displayFloat(std::string& str, float f, size_t len, int precision){
	if (isNum(str, len) || isNaN(str))
		std::cout << "float: " << std::fixed << std::setprecision(precision) << f << 'f' << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}

void	displayDouble(std::string& str, float f, size_t len, int precision){
	if (isNum(str, len) || isNaN(str))
		std::cout << "double: " << std::fixed << std::setprecision(precision) << f << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	ScalarConverter::convert(std::string str){
	float	f = atof(str.c_str());
	size_t	len = str.length();
	int	precision = 1;
	
	for (size_t i = 1; i < len; ++i){
		if (precision == 1 && str[i - 1] != '.')
			continue ;
		else if (!isdigit(str[i + 1]))
			break ;
		++precision;
	}
	
	displayChar(str, f, len);
	displayInt(str, f, len);
	displayFloat(str, f, len, precision);
	displayDouble(str, f, len, precision);
} // UTILISER AFTOL (ATOI POUR FLOAT) ET APRES TOUT CAST
