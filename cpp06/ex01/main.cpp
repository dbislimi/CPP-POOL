/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:39:09 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:05:02 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(){
	Data		*d = new Data('e', 5);
	Data		*e;
	uintptr_t	u;
	
	u = Serializer::serialize(d);
	e = Serializer::deserialize(u);
	
	std::cout << *d << std::endl << *e << std::endl;
	
	delete d;
}
