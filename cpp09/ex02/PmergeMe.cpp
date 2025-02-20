/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:44:08 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/20 18:55:33 by dbislimi         ###   ########.fr       */
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
	
	for (; pairs * 2 < size; pairs *= 2)
		swapPairs(vec, pairs * 2);
	print(vec);
	std::cout << pairs << std::endl;
	std::vector<std::vector<long>::iterator>	main;
	std::vector<std::vector<long>::iterator>	pend;

	for (pairs /= 4; pairs >= 1; pairs /= 2){
		insertion(vec, main, pend, pairs * 2);
		print(vec);
	}

}

