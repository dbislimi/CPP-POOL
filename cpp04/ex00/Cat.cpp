/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:47:17 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:51:31 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal(){
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : AAnimal(other){
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other){
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Miaouuuu" << std::endl;
}

