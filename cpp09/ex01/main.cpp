/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:56:00 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/03 17:03:55 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Error: program takes a RPN expression." << std::endl;
		return (1);
	}
	
	RPN a(av[1]);
	
}