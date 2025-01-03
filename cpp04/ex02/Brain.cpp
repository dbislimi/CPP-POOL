/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:59:05 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:29:40 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& other){
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	std::copy(other.ideas, other.ideas + 100, this->ideas);
	return (*this);
}
