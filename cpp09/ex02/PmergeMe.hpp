/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/15 16:59:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <cmath>

class PmergeMe {
	private:
		std::vector<unsigned int>	_v;
		std::deque<unsigned int>	_d;
		
		template< typename T >
		void	print(T& t){
			typename T::iterator it;
			for (it = t.begin(); it != t.end(); ++it)
				std::cout << *it << ", ";
			std::cout << std::endl;
		}
		template< typename T >
		void	swap(T& t, int p){
			size_t	size = t.size();
			
			for (size_t	j = 0; j + 2 * p + 1 < size; j += 2 + 2 * p){
				if (t[j + p] <= t[j + 2 * p + 1])
					continue ;
				for (int i = 0; i <= p; ++i){
					unsigned int temp = t[i + j];
					t[i + j] = t[i + j + p + 1;];
					t[i + j + p + 1;] = temp;
				}
			}
		}
		PmergeMe();
		PmergeMe(const PmergeMe& instance);
		PmergeMe&	operator=(const PmergeMe& instance);
		
		
	public:
		PmergeMe(int ac, char** av);
		~PmergeMe();

		
};

#endif