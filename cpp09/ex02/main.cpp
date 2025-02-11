/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:46:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/11 18:54:16 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char** av){
	if (ac < 2){
		std::cerr << "Error: not enough arguments." << std::endl;
		return (1);
	}
	PmergeMe	s(ac, av);
}
