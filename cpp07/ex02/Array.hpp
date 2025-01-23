/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:23:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 23:07:56 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template< typename T>
class Array {
	private:
		T*				_array;
		unsigned int	_size;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& instance);
		Array<T>&	operator=(const Array<T>& instance);
		~Array();
		T&	operator[](unsigned int index);
		
		unsigned int		size();

};
#include "Array.tpp"

template< typename T >
void	print_array(Array<T>& arr){
	unsigned int	i = 0;

	while (i < arr.size())
		std::cout << arr[i++] << ", ";
	std::cout << std::endl;
}

#endif