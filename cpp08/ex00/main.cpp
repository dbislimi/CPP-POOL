/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:50:26 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/26 16:05:24 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(){
	std::list<int>	l(5, 2);
	std::list<int>::iterator	it;

	it = easyfind(l, 3);
	if (it == l.end())
		std::cerr << "Element not found" << std::endl;
	else
		std::cout << *it << std::endl;
}