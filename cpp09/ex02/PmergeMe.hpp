/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/14 18:51:37 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>

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
		void	swap(T& t, int e){
			size_t	size = t.size();
				
			for (size_t	j = 0; j < size; j += e){
				if (t[j] <= t[j + e - 1])
					continue ;
				for (int i = 0; i < e - 1; ++i){
					unsigned int temp = t[j + i];
					t[j + i] = t[j + i + e - 1];
					t[j + i + e - 1] = temp;
				}
			}
		}
		PmergeMe();
		PmergeMe&	operator=(const PmergeMe& instance);
		PmergeMe(const PmergeMe& instance);
		
		
	public:
		PmergeMe(int ac, char** av);
		~PmergeMe();

		
};

#endif