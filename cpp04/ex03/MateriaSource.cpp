/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:27:07 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 14:20:48 by dbislimi         ###   ########.fr       */
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
	for (int i = 0; i < 4; ++i){
		if (memory[i])
			delete memory[i];
	}
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
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; ++i){
		if (this->memory[i] == NULL){
			this->memory[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < 4; ++i){
		if (type == this->memory[i]->getType())
			return (this->memory[i]->clone());
	}
	return (NULL);
}
