/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:46:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 19:34:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T >
Array<T>::Array(): _content(), _next(NULL){
}

template< typename T >
Array<T>::Array(unsigned int n): _content(), _next(NULL){
	if (n)
		this->_next = new Array<T>(n - 1);
}

template< typename T >
Array<T>::Array(const Array<T>& instance) {
	this->_content = instance._content;
	while (instance._next != NULL){
		this->_next = new Array<T>();
		this->_next->_content = instance._next->_content;
		this = this->_next;
		instance = instance._next;
	}
}

template< typename T >
Array<T>&	Array<T>::operator=(const Array<T>& instance){
	Array<T>&	node = *this;
	Array<T>&	inst = const_cast<Array<T>&>(instance);
	
	if (this == &instance)
		return (*this);
	this->_content = inst._content;
	while (inst._next != NULL){
		if (node._next == NULL)
			node._next = new Array<T>();
		node._next->_content = inst._next->_content;
		node = *node._next;
		inst = *inst._next;
	}
	delete &node;
	return (*this);
}

template< typename T >
Array<T>::~Array(){
	size_t	len = this->size();
	while (len--){
		delete &this[len];
	}
}

template< typename T >
Array<T>&	Array<T>::operator[](size_t index){
	size_t	i = 0;
	
	while (i < index && this != NULL)
		this = this->_next;
	if (i != index)
		throw std::exception();
	return (this);
}

template< typename T >
size_t	Array<T>::size(){
	Array<T>*	arr = this;
	size_t	len = 0;
	
	while (arr){
		arr = arr->_next;
		++len;
	}
	return (len);
}
