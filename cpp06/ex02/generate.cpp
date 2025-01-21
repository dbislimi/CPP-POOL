/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:55:02 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/21 16:57:47 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

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
	Base*(*gen[3])() = {&genA, &genB, &genC};
	int	r;
	
	srand(time(NULL));
	r = rand() % 3;
	return (gen[r]());
}
