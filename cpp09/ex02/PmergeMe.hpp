/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/15 17:56:28 by dbislimi         ###   ########.fr       */
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

			for (size_t	j = 0; j + 2 * p - 1 < size; j += 2 * p)
				if (t[j + p - 1] > t[j + p * 2 - 1])
					for (int i = 0; i < p; ++i)
						std::swap(t[i + j], t[i + j + p]);
		}
		PmergeMe();
		PmergeMe(const PmergeMe& instance);
		PmergeMe&	operator=(const PmergeMe& instance);
		
		
	public:
		PmergeMe(int ac, char** av);
		~PmergeMe();

		
};

#endif