/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:40:14 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 13:46:23 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 10;
	Zombie	*horde = zombieHorde(N, "iheb");

	for (int i = 0; i < N; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}
