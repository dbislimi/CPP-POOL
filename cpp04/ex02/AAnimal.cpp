/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:39:23 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:55:43 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type){
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type){
	std::cout << "Animal Copy constructor called" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

std::string	AAnimal::getType() const{
	return (this->type);
}
