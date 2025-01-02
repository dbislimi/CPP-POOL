/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:07:00 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/02 19:19:10 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		DiamondTrap();
		std::string	_name;
	
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap& other);

		void	attack(std::string& target);
		void	whoAmI();
};

#endif