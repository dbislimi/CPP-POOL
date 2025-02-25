/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:46:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/25 17:14:50 by dbislimi         ###   ########.fr       */
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
	
	if (build_container(ac, av, vec) == false)
		return (1);
	std::cout << "Before: ";
	print(vec);
	s.sort_vector(vec);
	std::cout << "After: ";
	print(vec);
	
	if (build_container(ac, av, dq) == false)
		return (1);
	s.sort_deque(dq);
}
