/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:51:52 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/27 17:20:42 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <limits.h>

int main()
{
	Span sp = Span(100000);
	srand(time(NULL));
	std::vector<int> vct;
	for (unsigned int i = 0; i < 100000; ++i){
		vct.push_back(std::rand());
		// try {
		// 	sp.addNumber(std::rand());
		// }
		// catch (Span::MaxCapacity& e){
		// 	std::cerr << e.what() << std::endl;
		// 	break ;
		// }
	}
	sp.addList(vct.begin(), vct.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}