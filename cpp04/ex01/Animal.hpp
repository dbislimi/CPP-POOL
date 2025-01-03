/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:33:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:51:31 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal{
	protected:
		std::string type;
		
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal();
		AAnimal&	operator=(const AAnimal& other);

		std::string	getType() const;
		virtual void	makeSound() const;
		virtual void	floodBrain(std::string idea, unsigned int n);
		virtual void	displayIdeas() const;
};

#endif