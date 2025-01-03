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

Cat::Cat() : AAnimal("Cat"), brain(new Brain()){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), brain(new Brain(*other.brain)){
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat&	Cat::operator=(const Cat& other){
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	*this->brain = *other.brain;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Miaouuuu" << std::endl;
}

void	Cat::floodBrain(std::string idea, unsigned int n){
	if (n > 100)
		n = 100;
	for (unsigned int i = 0; i < n; ++i)
		this->brain->ideas[i] = idea;
}

void	Cat::displayIdeas() const{
	for (std::string* it = this->brain->ideas; (*it) != ""; ++it){
		std::cout << (*it) << " ";
	}
	std::cout << std::endl;
}
