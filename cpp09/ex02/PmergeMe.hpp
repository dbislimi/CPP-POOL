/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/27 18:14:32 by dbislimi         ###   ########.fr       */
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
#include <limits.h>

template< typename T>
bool	build_container(int ac, char **av, T& container){	
	for (int i = 1; i < ac; ++i){
		if (atol(av[i]) > INT_MAX){
			std::cerr << "Error: INT_MAX." << std::endl;
			return (false);
		}
		for (size_t j = 0; j < std::string(av[i]).length(); ++j){
			if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
				++j;
			if (!isdigit(av[i][j])){
				std::cerr << "Error: Unvalid argument, the program accepts integers only." << std::endl;
				return (false);
			}	
		}
		container.push_back(atol(av[i]));
	}
	return (true);
}

template< typename T >
void	print(T& t){
	typename T::iterator it;
	for (it = t.begin(); it != t.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template< typename Iterator >
Iterator	adv(Iterator it, int n){
	std::advance(it, n);
	// std::cout << "adding: " << *(*it) << std::endl;
	return (it);
}

template < typename T >
bool	comp(T it1, T it2){
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
		void	insertion(T& container, I main, I pend, int elements){
			T			sort;
			typename 	T::iterator it = container.begin();
			size_t		size = container.size();
			bool		odd = size / elements % 2;
			
			if (size / elements <= 2)
				return ;
			main.insert(main.end(), adv(it, elements - 1));
			main.insert(main.end(), adv(it, elements * 2 - 1));
			for (size_t i = 3; i < (size / elements); i += 2){
				pend.push_back(adv(it, elements * i - 1));
				main.push_back(adv(it, elements * (i + 1) - 1));
				std::cout << "main: ";
			for (typename I::iterator it = main.begin(); it != main.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			std::cout << "pend: ";
			for (typename I::iterator it = pend.begin(); it != pend.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			}
			if (odd)
				pend.push_back(adv(it, elements * (size / elements)) - 1);
			std::cout << "main: ";
			for (typename I::iterator it = main.begin(); it != main.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			std::cout << "pend: ";
			for (typename I::iterator it = pend.begin(); it != pend.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			typename I::iterator	to_insert;
			typename I::iterator	idx;
			size_t	pend_size = pend.size();
			size_t	inserted = 0;
			int		i = 0;
			std::cout << "pendsize: " << pend_size << std::endl;
			while (inserted < pend_size){
				int	jacob = jacobsthal(i + 2);
				int	last_jacob = jacobsthal(i++ + 1);
				int	jacobsthal_diff = jacob - last_jacob;

				for (int j = 0; j < jacobsthal_diff; ++j){
					// if (odd && jacob - j == static_cast<int>(pend_size) + 1)
					// 	continue ;
					to_insert = adv(pend.begin(), jacob - 2 - j);
					if (to_insert == pend.end())
						continue ;
					std::cout << "debug: " <<j << ", "<< jacob << std::endl << *(*to_insert) << std::endl << "inserted: " << inserted << std::endl;
					if (inserted + jacob < main.size())
						idx = std::upper_bound(main.begin(), adv(main.begin(), inserted + jacob), *to_insert, comp<typename T::iterator>);
					else
						idx = std::upper_bound(main.begin(), main.end(), *to_insert, comp<typename T::iterator>);	
					if (idx == main.end())
						std::cout << "end" << std::endl;
					// std::cout << "idx: " << *(*idx) << std::endl;
					main.insert(idx, *to_insert);
					++inserted;
				}
			}
			std::cout << "main: ";
			for (typename I::iterator it = main.begin(); it != main.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;
			std::cout << "pend: ";
			for (typename I::iterator it = pend.begin(); it != pend.end(); ++it){
				std::cout << *(*it) << ", ";
			}
			std::cout << std::endl;

			// if (odd){
			// 	to_insert = adv(pend.begin(), pend_size - 1);
			// 	idx = std::upper_bound(main.begin(), main.end(), *to_insert, comp<typename T::iterator>);
			// 	main.insert(idx, *to_insert);
			// }
			for (typename I::iterator it = main.begin(); it != main.end(); ++it)
				for (int i = elements - 1; i >= 0; --i)
					sort.push_back(*adv(*it, -i));
			std::cout << "container: ";
			print(container);
			std::cout << std::endl;
			for (size_t i = 0; i < sort.size(); ++i)
				container[i] = sort[i];
		}
			
		
		PmergeMe(const PmergeMe& instance);
		PmergeMe&	operator=(const PmergeMe& instance);
		
	public:
		PmergeMe();
		~PmergeMe();
		void	sort_vector(std::vector<long>& vec);
		void	sort_deque(std::deque<long>& container);

		static size_t	jacobsthal(int n);
		
		
};



#endif