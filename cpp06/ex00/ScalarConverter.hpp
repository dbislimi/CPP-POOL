/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:00:48 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/13 18:34:45 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter&	operator=(const ScalarConverter& instance);
		ScalarConverter(const ScalarConverter& instance);
		
	public:
		ScalarConverter();
		virtual ~ScalarConverter() = 0;
		
		static void	convert(int c);
};

#endif