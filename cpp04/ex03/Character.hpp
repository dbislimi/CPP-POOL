/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:59:29 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/08 11:04:55 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria*	inventory[4];
		Character();

	public:
		Character(std::string name);
		Character(const Character& instance);
		~Character();
		Character&	operator=(const Character& instance);

		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);		
};