/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:06:18 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 16:44:20 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(){
	std::list<int>	l = {1, 2, 3, 4, 5};
	MutantStack<int, std::list<int>>	s(l);
}