/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:44:47 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:24:20 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain{
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();
		Brain&	operator=(const Brain& other);
		
		std::string	ideas[100];
};

#endif