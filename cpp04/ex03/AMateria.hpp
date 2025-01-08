/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:19:22 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 14:37:27 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		const std::string	_type;
		AMateria();
		AMateria&	operator=(const AMateria& instance);

	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& instance);
		virtual ~AMateria();
		
		std::string const& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};
