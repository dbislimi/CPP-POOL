/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/18 19:03:12 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <cmath>

template< typename T >
void	print(T& t){
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

template< typename Iterator >
Iterator&	next(Iterator& it, int n){
	std::advance(it, n);
	std::cout <<"it " << *it << std::endl;
	return (it);
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
		template< typename T, typename I >
		void	insertion(T& container, I& main, I& pend, int elements){
			typename T::iterator it = container.begin();
			size_t	size = container.size();
			(void)pend;
			(void)main;
			(void)it;
			//init main & pend
			main.insert(main.end(), next(it, elements) - 1);
			main.insert(main.end(), next(it, elements) - 1);			
			std::cout << *main[0] << ' ' << *main[1] << std::endl;
			for (size_t i = 0; i < size / elements; ++i){
				main.push_back(next(it, elements) - 1);
				pend.push_back(next(it, elements) - 1);
				std::cout << i << std::endl;
			}
			std::cout << "main: ";
			for (auto it = main.begin(); it != main.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			std::cout << "pend: ";
			for (auto it = pend.begin(); it != pend.end(); ++it){
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