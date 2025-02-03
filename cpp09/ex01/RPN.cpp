/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:53:38 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/03 18:55:11 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool	isop(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	RPN::calculate(char op){
	int	a = 0;
	int	b = 0;
	switch (op){
		case '+':
			a = this->_stack.top();
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(a + b);
			break;
		case '-':
			a = this->_stack.top();
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(b - a);
			break;
		case '*':
			a = this->_stack.top();
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(a * b);
			break;
		case '/':
			a = this->_stack.top();
			if (a == 0)
				return (false);
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(b / a);
			break;
	}
	return (true);
}

RPN::RPN(){
}

RPN::RPN(std::string op){
	size_t	len = op.length();

	for (size_t i = 0; i < len; ++i){
		if (std::isspace(op[i]))
			continue ;
		if (std::isdigit(op[i]))
			this->_stack.push(op[i] - '0');
		else if (isop(op[i])){
			if (this->_stack.size() < 2){
				std::cerr << "Error: not a RPN." << std::endl;
				return ;
			}
			else if (!this->calculate(op[i])){
				std::cerr << "Error: division by 0." << std::endl;
				return ;
			}
		}
		else{
			std::cerr << "Error: unvalid character." << std::endl;
			return ;
		}
	}
	if (this->_stack.size() != 1){
		std::cerr << "Error: not a RPN." << std::endl;
		return ;
	}
	std::cout << this->_stack.top() << std::endl;
}

RPN::RPN(const RPN& instance) : _stack(instance._stack){
}

RPN::~RPN(){
}

RPN&	RPN::operator=(const RPN& instance){
	if (this == &instance)
		return (*this);
	this->_stack = instance._stack;
	return (*this);
}
