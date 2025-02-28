/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/28 16:43:08 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <ctime>

template< typename T>
bool	build_container(int ac, char **av, T& container){	
	for (int i = 1; i < ac; ++i){
		if (atol(av[i]) > INT_MAX){
			std::cerr << "Error: INT_MAX." << std::endl;
			return (false);
		}
		for (size_t j = 0; j < std::string(av[i]).length(); ++j){
			if (av[i][j] == '+')
				++j;
			if (!isdigit(av[i][j])){
				std::cerr << "Error: Unvalid argument, the program accepts positive integers only." << std::endl;
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
		void	insertion(T& container, I main, I pend, int pairs){
			T			sort;
			typename 	T::iterator it = container.begin();
			size_t		size = container.size();
			bool		odd = size / pairs % 2;
			
			if (size / pairs <= 2)
				return ;
			main.insert(main.end(), adv(it, pairs - 1));
			main.insert(main.end(), adv(it, pairs * 2 - 1));
			for (size_t i = 3; i < (size / pairs); i += 2){
				pend.push_back(adv(it, pairs * i - 1));
				main.push_back(adv(it, pairs * (i + 1) - 1));
			}
			if (odd)
				pend.push_back(adv(it, pairs * (size / pairs)) - 1);

			typename I::iterator	to_insert;
			typename I::iterator	idx;
			size_t	pend_size = pend.size();
			size_t	inserted = 0;
			int		i = 0;

			while (inserted < pend_size){
				int	jacob = jacobsthal(i + 2);
				int	last_jacob = jacobsthal(i++ + 1);
				int	jacobsthal_diff = jacob - last_jacob;

				for (int j = 0; j < jacobsthal_diff; ++j){
					if (static_cast<size_t>(jacob - 2 - j) >= pend_size)
						continue ;
					to_insert = adv(pend.begin(), jacob - 2 - j);
					if (inserted + jacob < main.size())
						idx = std::upper_bound(main.begin(), adv(main.begin(), inserted + jacob), *to_insert, comp<typename T::iterator>);
					else
						idx = std::upper_bound(main.begin(), main.end(), *to_insert, comp<typename T::iterator>);	
					main.insert(idx, *to_insert);
					++inserted;
				}
			}

			for (typename I::iterator it = main.begin(); it != main.end(); ++it)
				for (int i = pairs - 1; i >= 0; --i)
					sort.push_back(*adv(*it, -i));
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

template< typename T >
void	is_sorted(T container){
	std::cout << container.size() << " elements ";
	for (size_t i = 0; i < container.size() - 1; ++i){
		if (container[i] > container[i + 1]){
			std::cout << "not sorted." << std::endl;
			return ;
		}
	}
	std::cout << "sorted." << std::endl;
}

#endif