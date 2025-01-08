/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:27:07 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 11:33:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; ++i)
		memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& instance){
	for (int i = 0; i < 4; ++i){
		if (instance.memory[i])
			memory[i] = instance.memory[i]->clone();
		else
			memory[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	delete[] memory;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& instance){
	if (this == &instance)
		return (*this);
	for (int i = 0; i < 4; ++i){
		if (this->memory[i]){
			delete this->memory[i];
			this->memory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; ++i){
		if (instance.memory[i])
			this->memory[i] = instance.memory[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m){
	
}