/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:56:20 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/21 16:57:54 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

void	identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type: C" << std::endl;
}

void	identify(Base& p){
	try{
		dynamic_cast<A&>(p);
	}
	catch (std::exception &e){
		try{
			dynamic_cast<B&>(p);
		}
		catch (std::exception &e){
			std::cout << "type: C" << std::endl;
			return ;
		}
		std::cout << "type: B" << std::endl;
		return ;
	}
	std::cout << "type: A" << std::endl;
	return ;
}
