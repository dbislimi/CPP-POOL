/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:33:39 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:55:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

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
		virtual void	makeSound() const = 0;
		virtual void	floodBrain(std::string idea, unsigned int n) = 0;
		virtual void	displayIdeas() const = 0;
};

#endif