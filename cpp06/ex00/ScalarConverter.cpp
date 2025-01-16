/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:06:55 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/16 17:19:18 by dbislimi         ###   ########.fr       */
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
	std::cout << f << std::endl;
	if (len == 1){
		if (isprint(str[0])) 
			std::cout << "char: " << str << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (len > 1 && f == 0){
		std::cout << "char: impossible" << std::endl;
		if (!isnum(str))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;		
	}
	else{
		std::cout << "char: \'" << static_cast<char>(f) << '\'' << std::endl;
		if ((f != INT_MIN && static_cast<int>(f) == INT_MIN) || (f != INT_MAX && static_cast<int>(f) == INT_MAX))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	if (len > 1 && !isnum(str)){
		std::cout << "float: impossible" << std::endl
				<< "double: impossible" << std::endl;
	}
	else {
		std::cout << "float: " << std::fixed << std::setprecision(precision) << f << 'f' << std::endl
			<< "double: " << static_cast<double>(f) << std::endl;
	}
} // UTILISER AFTOL (ATOI POUR FLOAT) ET APRES TOUT CAST
