/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:44:08 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/28 16:43:32 by dbislimi         ###   ########.fr       */
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
	size_t	pairs = 1;
	
	for (; pairs * 2 <= size; pairs *= 2)
		swapPairs(vec, pairs * 2);
	std::vector<std::vector<long>::iterator>	main;
	std::vector<std::vector<long>::iterator>	pend;

	for (pairs /= 2; pairs >= 1; pairs /= 2)
		insertion(vec, main, pend, pairs);
}

void	PmergeMe::sort_deque(std::deque<long>& dq){
	size_t	size = dq.size();
	size_t	pairs = 1;
	
	for (; pairs * 2 <= size; pairs *= 2)
		swapPairs(dq, pairs * 2);
	std::deque<std::deque<long>::iterator>	main;
	std::deque<std::deque<long>::iterator>	pend;

	for (pairs /= 2; pairs >= 1; pairs /= 2)
		insertion(dq, main, pend, pairs);
}
