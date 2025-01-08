/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:22:47 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 11:33:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria*	memory[4];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& instance);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& instance);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
}