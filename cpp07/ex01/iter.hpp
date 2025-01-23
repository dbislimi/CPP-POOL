/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:54:01 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 17:18:17 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template< typename T >
void	iter(T* arr, size_t len, void (*funct)(T&)){
	for (size_t i = 0; i < len; ++i){
		funct(arr[i]);
	}
}

template< typename T >
void	up(T& i){
	std::cout << ' ' << i << ',';
}

#endif