/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:44:08 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/27 14:17:40 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
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

void	PmergeMe::sort_vector(std::vector<long>& vec){
	size_t	size = vec.size();
	size_t	elements = 2;
	
	for (; elements <= size / 2; elements *= 2)
		swapPairs(vec, elements);
	std::cout << "swap:";
	print(vec);
	std::vector<std::vector<long>::iterator>	main;
	std::vector<std::vector<long>::iterator>	pend;

	for (elements /= 2; elements >= 1; elements /= 2){
		std::cout << "elements: "  << elements << std::endl;
		insertion(vec, main, pend, elements);
	}
	std::cout << "insert: ";
	print(vec);
}

void	PmergeMe::sort_deque(std::deque<long>& dq){
	size_t	size = dq.size();
	size_t	elements = 2;
	
	for (; elements <= size / 2; elements *= 2)
		swapPairs(dq, elements);
	
	std::deque<std::deque<long>::iterator>	main;
	std::deque<std::deque<long>::iterator>	pend;

	for (elements /= 2; elements >= 1; elements /= 2)
		insertion(dq, main, pend, elements);
}