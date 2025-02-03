/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:56:20 by dbislimi          #+#    #+#             */
/*   Updated: 2025/02/03 14:51:39 by dbislimi         ###   ########.fr       */
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
		(void)dynamic_cast<A&>(p);
	}
	catch (std::exception &e){
		try{
			(void)dynamic_cast<B&>(p);
		}
		catch (std::exception &e){
			try{
				(void)dynamic_cast<C&>(p);
			}
			catch (std::exception &e){
				return ;
			}
			std::cout << "type: C" << std::endl;
			return ;
		}
		std::cout << "type: B" << std::endl;
		return ;
	}
	std::cout << "type: A" << std::endl;
	return ;
}
