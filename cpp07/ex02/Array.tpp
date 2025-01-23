/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:46:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 23:05:03 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T >
Array<T>::Array(): _array(new T[0]), _size(0){
}

template< typename T >
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n){
}

template< typename T >
Array<T>::Array(const Array<T>& instance){
	Array<T>::operator=(instance);
}

template< typename T >
Array<T>&	Array<T>::operator=(const Array<T>& instance){
	if (this == &instance)
		return (*this);
	delete[] this->_array;
	this->_array = new T[instance._size];
	this->_size = instance._size;
	for (unsigned int i = 0; i < instance._size; ++i)
		this->_array[i] = instance._array[i];
	return (*this);
}

template< typename T >
Array<T>::~Array(){
	delete[] this->_array;
}

template< typename T >
T&	Array<T>::operator[](unsigned int index){
	if (index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return (this->_array[index]);
}

template< typename T >
unsigned int	Array<T>::size(){
	return (this->_size);
}
