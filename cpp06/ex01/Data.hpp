/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:25:20 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:04:20 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <iostream>

class Data {
	private:
		char	_c;
		int		_i;

	
	public:
		Data();
		Data(char c, int i);
		Data(const Data& instance);
		~Data();
		Data&	operator=(const Data& instance);

		char	getC() const;
		int		getI() const;
};

std::ostream	&operator<<(std::ostream &output, const Data& instance);

#endif