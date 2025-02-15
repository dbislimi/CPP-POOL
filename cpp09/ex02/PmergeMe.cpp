/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:44:08 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/15 16:18:49 by dbislimi         ###   ########.fr       */
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
	print(this->_v);
	for (size_t i = 0; i <= this->_v.size() / 2; i += i + 1){
		swap(this->_v, i);
		// std::cout << "i: " << i + 1 << std::endl;
		print(this->_v);
	}
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