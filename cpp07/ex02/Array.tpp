/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:46:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 22:36:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T >
Array<T>::Array(): _content(), _next(NULL){
}

template< typename T >
Array<T>::Array(unsigned int n): _content(), _next(NULL){
	if (n != 1)
		this->_next = new Array<T>(n - 1);
}

template< typename T >
Array<T>::Array(const Array<T>& instance) : _content(), _next(NULL){
	Array<T>::operator=(instance);
}

template< typename T >
Array<T>&	Array<T>::operator=(const Array<T>& instance){
	Array<T>*	node = this;
	Array<T>*	inst = &const_cast<Array<T>&>(instance);
	
	if (this == &instance)
		return (*this);
	this->_content = instance._content;
	while (inst->_next != NULL){
		if (node->_next == NULL)
			node->_next = new Array<T>();
		node->_next->_content = inst->_next->_content;
		node = node->_next;
		inst = inst->_next;
	}
	if (node->_next != NULL)
		delete node->_next;
	return (*this);
}


template< typename T >
Array<T>&	Array<T>::operator=(T content){
	this->_content = content;
	return (*this);
}

template< typename T >
Array<T>::~Array(){
	delete this->_next;
	this->_next = NULL;
}

template< typename T >
T&	Array<T>::operator[](int index){
	Array<T>*	node = this;
	int	i = 0;
	
	if (index < 0)
		throw std::out_of_range("Negative index");
	while (node->_next != NULL && i < index){
		node = node->_next;
		++i;
	}
	if (i != index)
		throw std::out_of_range("Index out of bound");
	return (node->getContent());
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
