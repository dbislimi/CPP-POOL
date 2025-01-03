/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:43:50 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:51:31 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), brain(new Brain()){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain)){
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog&	Dog::operator=(const Dog& other){
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	*this->brain = *other.brain;
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Waouf waouf" << std::endl;
}

void	Dog::floodBrain(std::string idea, unsigned int n){
	if (n > 100)
		n = 100;
	for (unsigned int i = 0; i < n; ++i)
		this->brain->ideas[i] = idea;
}

void	Dog::displayIdeas() const{
	for (std::string* it = this->brain->ideas; (*it) != ""; ++it){
		std::cout << (*it) << " ";
	}
	std::cout << std::endl;
}