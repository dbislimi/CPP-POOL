/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:46 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/02 17:43:28 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav2("Mark");
	ScavTrap scav3(scav2);
	std::string	ops = "ib";

	scav3 = scav2;
	
	scav3.attack(ops);
	scav3.takeDamage(8);
	scav3.beRepaired(6);
	scav3.attack(ops);
	scav3.takeDamage(10);
	scav3.guardGate();
	scav3.takeDamage(100);
	scav3.attack(ops);
	scav3.beRepaired(4);
	scav3.beRepaired(4);
	scav3.attack(ops);
}
