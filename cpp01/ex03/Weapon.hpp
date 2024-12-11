/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:13:54 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 16:10:45 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <iomanip>

class Weapon{
public:

	Weapon(void);
	Weapon(std::string type);
	const std::string	&getType(void);
	void				setType(std::string newType);
	
private:

	std::string	type;
};

#endif