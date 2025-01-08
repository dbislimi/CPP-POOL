/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:19:22 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 10:34:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	_type;
		AMateria();

	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& instance);
		~AMateria();
		AMateria&	operator=(const AMateria& instance);
		
		std::string const& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};
