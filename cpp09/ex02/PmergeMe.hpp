/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/19 17:29:33 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>

template< typename T >
void	print(T& t){
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

template< typename Iterator >
Iterator&	_next(Iterator& it, int n){
	std::advance(it, n);
	return (it);
}

template< typename Iterator >
Iterator	next(Iterator it, int n){
	std::advance(it, n);
	return (it);
}

template <typename T>
bool	comp(T lv, T rv) {
	return (*lv < *rv);
}
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

		
		template< typename T, typename I >
		void	insertion(T& container, I& main, I& pend, int elements){
			typename T::iterator it = container.begin();
			size_t	size = container.size();
			bool	odd = size / elements % 2;

			main.insert(main.end(), _next(it, elements) - 1);
			main.insert(main.end(), _next(it, elements) - 1);			
			for (size_t i = 0; i < ((size / elements) - 2) / 2; ++i){
				pend.push_back(_next(it, elements) - 1);
				main.push_back(_next(it, elements) - 1);
			}
			if (odd){
				pend.push_back(_next(it, elements) - 1);
			}
		
			size_t	pend_size = pend.size();
			size_t		inserted = 0;
			int		i = 0;

			while (inserted < pend_size){
				int	jacob = jacobsthal(i + 2);
				int	last_jacob = jacobsthal(i++ + 1);
				int	jacobsthal_diff = jacob - last_jacob;
				
				for (int j = 0; j < jacobsthal_diff; ++j){
					if (odd && jacob - 1 == static_cast<int>(pend_size))
						continue ;

					std::vector<std::vector<long>::iterator>::iterator	to_insert = next(pend.begin(), jacob - 2 - j);
					std::vector<std::vector<long>::iterator>::iterator	idx = std::upper_bound(main.begin(), next(main.begin(), inserted + jacob), *to_insert, comp);
									std::cout << "debug" << std::endl;
					// main.insert(idx, *to_insert);
					++inserted;
					std::cout << inserted << std::endl;
				}
			}
			std::cout << "main: ";
			for (std::vector<std::vector<long>::iterator>::iterator it = main.begin(); it != main.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			std::cout << "pend: ";
			for (std::vector<std::vector<long>::iterator>::iterator it = pend.begin(); it != pend.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
				
		}
		
			
		size_t	jacobsthal(int n);
		
		PmergeMe(const PmergeMe& instance);
		PmergeMe&	operator=(const PmergeMe& instance);
		
	public:
		PmergeMe();
		~PmergeMe();
		void	sort_vector(std::vector<long>& vec);
		
		
		
};



#endif