/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:13:28 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/20 16:59:35 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("default"), FragTrap("default"){
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "clap_name"), ScavTrap(name), FragTrap(name), _name(name){
	this->_energyPoints = 50;
	std::cout << "Diamond constructor called for " << _name << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name){
	std::cout << "Diamond Copy constructor called" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond destructor called for " << _name << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other){
	std::cout << "Diamond Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::attack(std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "I am " << this->_name << ", aka " << ClapTrap::_name << std::endl;
}