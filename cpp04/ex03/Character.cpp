/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:44:17 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 11:19:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
}

Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; ++i)
		inventory[i] = nullptr;
}

Character::Character(const Character& instance) : _name(instance._name){
	for (int i = 0; i < 4; ++i){
		if (instance.inventory[i])
			inventory[i] = instance.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}

}

Character::~Character(){
	delete[] inventory;
	// for (int i = 0; !inventory[i]; ++i)
	// 	delete inventory[i];
}

Character&	Character::operator=(const Character& instance){
	if (this == &instance)
		return (*this);
	this->_name = instance._name;
	for (int i = 0; i < 4; ++i){
		if (this->inventory[i]){
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; ++i){
		if (instance.inventory[i])
			this->inventory[i] = instance.inventory[i]->clone();
	}
	return (*this);
}

std::string const& Character::getName() const{
	return (this->_name);
}

void	Character::equip(AMateria* m){
	for (int i = 0; !this->inventory[i]; ++i){
		this->inventory[i] = m;
		break ;
	}
}
void	Character::unequip(int idx){
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target){
	this->inventory[idx]->use(target);
}
