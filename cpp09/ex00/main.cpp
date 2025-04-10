/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:13:42 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/03 14:47:43 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Error: program takes one argument." << std::endl;
		return (1);
	}
	BitcoinExchange	BE("data.csv");
	
	BE.analyse(av[1]);
	BE.analyse("tst.txt");
}