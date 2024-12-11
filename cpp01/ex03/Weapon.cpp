/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:14:29 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 16:10:38 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
}

Weapon::Weapon(std::string type) : type(type){
}

const std::string	&Weapon::getType(void)
{
	std::string&	ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
