/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:46:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/28 16:46:06 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char** av){
	if (ac < 2){
		std::cerr << "Error: not enough arguments." << std::endl;
		return (1);
	}
	PmergeMe	s;
	std::vector<long> vec;
	std::deque<long> dq;
	clock_t	start;
	clock_t	end;

	start = clock();
	if (build_container(ac, av, vec) == false)
		return (1);
	std::cout << "Before: ";
	print(vec);
	s.sort_vector(vec);
	end = clock();

	std::cout << "After: ";
	print(vec);

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector :"
				<< static_cast<double>(end - start) / (CLOCKS_PER_SEC / (10 * 6))  << " us" <<  std::endl;
	start = clock();
	if (build_container(ac, av, dq) == false)
		return (1);
	s.sort_deque(dq);
	end = clock();
	std::cout << "Time to process a range of " << dq.size() << " elements with std::deque  :"
				<< static_cast<double>(end - start) / (CLOCKS_PER_SEC / (10 * 6)) << " us" << std::endl;
	// is_sorted(vec);
	// is_sorted(dq);
}
