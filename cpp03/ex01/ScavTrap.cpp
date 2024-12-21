/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:02:42 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/21 17:44:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :	ClapTrap()
{
	this->_name = "Unnamed Scav";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default Scav constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :	ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scav constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) :	ClapTrap(other){
	std::cout << "Scav Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other){
	std::cout << "Scav Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "Scav Destructor called for " << _name << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (!this->_hitPoints)
		return ;
	std::cout << _hitPoints << std::endl;
	if (!this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " failed to attack " << target << ", no more energy points." << std::endl;
		return ;
	}
	--this->_energyPoints;
	std::cout << "ScavTrap " <<  this->_name << " attacks " << target << 
				", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(){
	if (this->_hitPoints)
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}