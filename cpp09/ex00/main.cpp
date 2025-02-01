/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:13:42 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/02 00:12:37 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av){
	(void)ac;
	(void)av;
	if (ac != 2){
		std::cerr << "Error: program takes only one argument." << std::endl;
		return (1);
	}
	BitcoinExchange	BE("data.csv");
	
	BE.analyse(av[1]);
}