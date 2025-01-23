/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:55:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 23:06:18 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(){
	Array<int>	b(6);
	b[2] = 2;
	b[0] = 7;
	b[3] = 1;
	b[5] = b[0];
	std::cout << "size: " << b.size() << std::endl;
	Array<int>	c(b);
	Array<int>	e(11);
	e = c;
	b[1] = 100;
	print_array(c);
	print_array(b);
	print_array(e);
}