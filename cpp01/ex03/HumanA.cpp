/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:15:03 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 16:10:14 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):	name(name),
													weapon(weapon){
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their "
				<< this->weapon.getType() << std::endl;
}
