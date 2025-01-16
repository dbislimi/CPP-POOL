/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:00:48 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:13:42 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter&	operator=(const ScalarConverter& instance);
		ScalarConverter(const ScalarConverter& instance);
		ScalarConverter();
		
	public:
		~ScalarConverter();
		
		static void	convert(std::string str);
};

#endif