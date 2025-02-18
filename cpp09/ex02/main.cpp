/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:46:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/18 16:55:46 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::vector<long>::iterator	build_vector(int ac, char **av, std::vector<long>& vec){	
	for (int i = 1; i < ac; ++i){
		for (size_t j = 0; j < std::string(av[i]).length(); ++j){
			if (!isdigit(av[i][j])){
				std::cerr << "Error: argument " << i << " has an unvalid character" << std::endl;
				return (vec.end());
			}	
		}
		vec.push_back(atol(av[i]));
	}
	return (vec.begin());
}

int	main(int ac, char** av){
	if (ac < 2){
		std::cerr << "Error: not enough arguments." << std::endl;
		return (1);
	}
	PmergeMe	s;
	std::vector<long> vec;
	if (build_vector(ac, av, vec) == vec.end())
		return (1);
	s.sort_vector(vec);
}
