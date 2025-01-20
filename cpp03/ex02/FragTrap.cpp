/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:51:47 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/20 16:55:52 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "Frag Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
		std::cout << "Frag destructor called for " << this->_name << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other){
	std::cout << "Frag Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << "Frag " << this->_name << ": \"Stop fighting guys, let's high fives !\"" << std::endl;
}