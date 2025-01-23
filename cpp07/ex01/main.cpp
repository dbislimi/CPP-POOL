/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:58:37 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 17:22:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(){
	int	i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	float	f[5] = {2.03f, 4.53f, 6.34f, 54.54f, 64.36f};
	std::string s[4] = {"oui", "non", "  super", "ok"};
	
	::iter(i, 10, up);
	std::cout << std::endl;
	::iter(c, 5, up);
	std::cout << std::endl;
	::iter(f, 5, up);
	std::cout << std::endl;
	::iter(s, 4, up);
}