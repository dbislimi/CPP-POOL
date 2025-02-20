/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/20 19:05:15 by dbislimi         ###   ########.fr       */
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
Iterator	adv(Iterator it, int n){
	std::advance(it, n);
	return (it);
}

template < typename T >
bool	comp(T it1, T it2) {
	std::cout << "comp: " << *it1 << ", " << *it2 << std::endl;
	return (*it1 < *it2);
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
			main.clear();
			pend.clear();
			std::cout << "odd: " << odd << std::endl;
			std::cout << "elements: " << elements << std::endl;
			main.insert(main.end(), adv(it, elements - 1));
			main.insert(main.end(), adv(it, elements * 2 - 1));
			for (size_t i = 3; i < (size / elements); i += 2){
				pend.push_back(adv(it, elements * i - 1));
				main.push_back(adv(it, elements * (i + 1) - 1));
			}
			if (odd){
				pend.push_back(adv(it, elements * (size / elements)) - 1);
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
				
			typename I::iterator	to_insert;
			typename I::iterator	idx;
			size_t	pend_size = pend.size();
			size_t		inserted = 0;
			int		i = 0;

			if (pend_size == 0)
				return ;
			while (inserted < pend_size - 1){
				int	jacob = jacobsthal(i + 2);
				int	last_jacob = jacobsthal(i++ + 1);
				int	jacobsthal_diff = jacob - last_jacob;
				std::cout << "jacob: " << jacob  << "jacobdiff: " << jacobsthal_diff << std::endl;

				for (int j = 0; j < jacobsthal_diff; ++j){
					std::cout <<  "j: " << j << std::endl;
					if (odd && jacob - j == static_cast<int>(pend_size) + 1)
						continue ;


					to_insert = adv(pend.begin(), jacob - 2 - j);
					std::cout << *(*main.begin()) << std::endl;
					idx = std::upper_bound(main.begin(), adv(main.begin(), inserted + jacob - 1), *to_insert, comp<typename T::iterator>);
					main.insert(idx, *to_insert);
					++inserted;
					std::cout << "inserted: " << inserted << std::endl;
				}
			}
			if (odd){
				to_insert = adv(pend.begin(), pend_size - 1);
				idx = std::upper_bound(main.begin(), main.end(), *to_insert, comp<typename T::iterator>);
				main.insert(idx, *to_insert);
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
			container.clear();
			for (std::vector<std::vector<long>::iterator>::iterator it = main.begin(); it != main.end(); ++it){
				for (int i = 1; i <= elements; ++i){
					std::cout << "adding: " <<*adv(*it, -elements + i) << ", ";
					container.push_back(*adv(*it, -elements + i));
				}
			}
			// for (size_t i = 0; i < main.size(); ++i){
				
			// 	std::cout << "i:" << i << std::endl << "mainsize: " << main.size() << std::endl;
			// 	std::cout << *(*adv(main.begin() , i)) << std::endl;
			// 	for (int j = 1; j <= elements; ++j){
			// 		std::cout << *adv(*adv(main.begin(), i), - elements + j) << std::endl;
			// 		container.push_back(*adv(*adv(main.begin(), i), - elements + j));
			// 	}
			// }
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