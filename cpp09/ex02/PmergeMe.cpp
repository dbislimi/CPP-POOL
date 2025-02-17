/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:44:08 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/17 19:13:24 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::PmergeMe(int ac, char** av){
	for (int i = 1; i < ac; ++i){
		for (size_t j = 0; j < std::string(av[i]).length(); ++j){
			if (!isdigit(av[i][j])){
				std::cerr << "Error: argument " << i << " has an unvalid character" << std::endl;
				return ;
			}	
		}
		this->_v.push_back(atol(av[i]));
	}
	sortVector();
}

PmergeMe::PmergeMe(const PmergeMe& instance){
	(void)instance;
}

PmergeMe::~PmergeMe(){
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& instance){
	(void)instance;
	return (*this);
}

size_t	PmergeMe::jacobsthal(int n){
	return ((pow(2, n + 1) + pow(-1, n)) / 3);
}
void	PmergeMe::sortVector(){
	std::vector<unsigned int>	pend;
	std::vector<unsigned int>	odd;
	size_t	e = 2;
	
	for (; e <= this->_v.size() / 2; e *= 2){
		swapPairs(this->_v, e);
		print(this->_v);
	}
	for (e /=8; e >= 1; e /= 2){
		std::cout << e << std::endl;
		push_odd(_v, odd, e);
	std::cout << "main: ";
	print(_v);
		pushInPend(_v, pend, e);
		break ;
	}
	std::cout << "odd: ";
	print(odd);
	std::cout << "pend: ";
	print(pend);
}
