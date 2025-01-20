/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:54:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/20 18:10:13 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
}

Base*	genA(){
	return (new A);
}

Base*	genB(){
	return (new B);
}

Base*	genC(){
	return (new C);
}

Base*	generate(){
	Base*(*Base[3])() = {&genA, &genB, &genC};
	int	r;
	
	srand(time(NULL));
	r = rand() % 2;
	
}