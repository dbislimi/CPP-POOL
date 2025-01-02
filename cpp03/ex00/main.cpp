/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/02 17:41:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap character("Iheb");
	ClapTrap character2(character);
	std::string	ops = "ib";
	
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
