/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:44:25 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 14:15:54 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	private:
		Cure&	operator=(const Cure& instance);
	
	public:
		Cure();
		Cure(const Cure& instance);
		~Cure();

		AMateria* clone() const;
		void	use(ICharacter& target);
};
