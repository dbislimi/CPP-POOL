/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/17 21:35:16 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <cmath>

template< typename T >void	print(T& t);

class PmergeMe {
	private:
		template< typename T >
		void	swapPairs(T& t, int e){
			size_t	size = t.size();

			for (size_t	j = 0; j + e - 1 < size; j += e)
				if (t[j + e / 2 - 1] > t[j + e - 1])
					for (int i = 0; i < e / 2; ++i)
						std::swap(t[i + j], t[i + j + e / 2]);
		}
		template< typename T >
		void	insertion(T& container, int pair){
			typename T::iterator Iterator;
			std::vector<Iterator>	main;
			std::vector<Iterator>	pend;

			
		}
		template< typename T >
		void	push_odd(T& container, T& odd, int e){
			typename T::iterator	it = container.begin();
			size_t	size = container.size();

			if ((size / e) % 2 == 0)
				return ;
			for (size_t i = ((size / e) - 1) * e; i < size; ++i){
				odd.push_back(container[((size / e) - 1) * e]);
				container.erase(it + ((size / e)  - 1) * e);
			}
		}
		template< typename T >
		void	pushInPend(T& container, T& pend, int e){
			typename T::iterator	it = container.begin();
			size_t	size = container.size();

			for (size_t i = 2; i * 2 <= size / e; i += 1){
				pend.push_back(i);
				for (int j = 0; j < e; ++j){
					pend.push_back(container[i * e]);
					container.erase(it + i * e);
				}
			}
		}
		size_t	jacobsthal(int n);
		
		PmergeMe(const PmergeMe& instance);
		PmergeMe&	operator=(const PmergeMe& instance);
		
	public:
		PmergeMe();
		~PmergeMe();
		
		template< typename T >
		void	sort(T& container){
			size_t	size = container.size();
			size_t	pairs = 1;
			
			for (; pairs * 2 < size; pairs *= 2)
				swapPairs(container, pairs * 2);
			print(container);

			
			

		}
		
};

template< typename T >
void	print(T& t){
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}
// template< typename T > T	next(T& it, int p){
// 	std::a
// }

#endif