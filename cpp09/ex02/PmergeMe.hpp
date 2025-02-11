/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:52:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/11 18:54:19 by dbislimi         ###   ########.fr       */
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
		
		template< typename T >
		void	print(T& t){
			typename T::iterator it;
			for (it = t.begin(); it != t.end(); ++it)
				std::cout << *it << ", ";
			std::cout << std::endl;
		}

		PmergeMe();
		PmergeMe&	operator=(const PmergeMe& instance);
		PmergeMe(const PmergeMe& instance);
		
	public:
		PmergeMe(int ac, char** av);
		~PmergeMe();

		
};

#endif