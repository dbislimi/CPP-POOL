/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:36:13 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 16:52:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template< typename T >
void	swap(T& a, T& b){
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template< typename T >
T&	min(T& x, T& y){
	return ((x < y) ? x : y);
}

template< typename T >
T&	max(T& x, T& y){
	return ((x > y) ? x : y);
}

#endif