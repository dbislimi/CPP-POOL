/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:44:25 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 10:41:19 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	private:

	public:
		Cure();
		Cure(const Cure& instance);
		~Cure();
		Cure&	operator=(const Cure& instance);

		AMateria* clone() const;
		void	use(ICharacter& target);
};
