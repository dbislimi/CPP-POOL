/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:45:56 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/19 17:49:30 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):	_name("Unnamed"),
							_hitPoints(10),
							_energyPoints(10),
							_attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):	_name(name),
										_hitPoints(10),
										_energyPoints(10),
										_attackDamage(0){
}

ClapTrap::ClapTrap(const ClapTrap &other):	_name(other._name),
											_hitPoints(other._hitPoints),
											_energyPoints(other._energyPoints),
											_attackDamage(other._attackDamage){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if (!this->_hitPoints)
		return ;
	if (!this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " failed to attack " << target << ", no more energy points." << std::endl;
		return ;
	}
	--this->_energyPoints;
	std::cout << "ClapTrap " <<  this->_name << " attacks " << target << 
				", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	int	prevHit = this->_hitPoints;
	
	if (!this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
		return ;
	}
	if (this->_hitPoints - static_cast<int>(amount) < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " <<  this->_name << " has been attacked ! Health: " 
				<< this->_hitPoints << "(" << prevHit << "-" << amount << ")" << std::endl;
	if (_hitPoints == 0)
		std::cout << "ClapTrap " <<  this->_name << " died." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	int	prevHit = this->_hitPoints;
	
	if (!this->_hitPoints)
		return ;
	if (this->_hitPoints == 10)
	{
		std::cout << "ClapTrap " << this->_name << " is already full life." << std::endl;
		return ;
	}
	if (!this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " failed to repair itself, no more energy points." << std::endl;
		return ;
	}
	if (this->_hitPoints + amount > 10)
		this->_hitPoints = 10;
	else
		this->_hitPoints += amount;
	--this->_energyPoints;
	std::cout << "ClapTrap " <<  this->_name << " repaired itself ! Health: " 
				<< this->_hitPoints << "(" << prevHit << "+" << amount << ")" << std::endl;
}
