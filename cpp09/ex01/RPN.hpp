/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:56:28 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/03 18:26:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<int>	_stack;
		bool	calculate(char op);
		RPN();
	
	public:
		RPN(std::string op);
		RPN(const RPN& instance);
		~RPN();
		RPN&	operator=(const RPN& instance);
};

#endif