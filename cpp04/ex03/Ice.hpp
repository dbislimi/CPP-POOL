/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:34:17 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 14:16:05 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	private:
		Ice&	operator=(const Ice& instance);
	
	public:
		Ice();
		Ice(const Ice& instance);
		~Ice();

		AMateria* clone() const;
		void	use(ICharacter& target);
};
