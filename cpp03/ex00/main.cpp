/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:46 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/21 17:35:14 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap character("Iheb");
	ClapTrap character2(character);
	ClapTrap character3;
	std::string	ops = "ib";
	
	character3 = character2;
	character.attack(ops);
	character.takeDamage(8);
	character.beRepaired(6);
	character.attack(ops);
	character.takeDamage(10);
	character.takeDamage(10);
	character.beRepaired(4);
	character.attack(ops);
	character.beRepaired(4);
	character.beRepaired(4);
}
