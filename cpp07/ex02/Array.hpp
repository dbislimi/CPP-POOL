/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:23:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 22:15:08 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template< typename T>
class Array {
	private:
		T			_content;
		Array<T>*	_next;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& instance);
		Array<T>&	operator=(const Array<T>& instance);
		Array<T>&	operator=(T content);
		~Array();
		T&	operator[](int index);	
		size_t		size();
		T&			getContent() {return (this->_content);}
		Array<T>*	getNext() {return (this->_next);}
};

#include "Array.tpp"

template< typename T >
std::ostream&	operator<<(std::ostream& output, Array<T>& v){	
	output << v.getContent();
	return (output);
}

template< typename T >
void	print_array(Array<T>& arr){
	Array<T>*	node = &arr;
	while (node){
		std::cout << node->getContent() << ", ";
		node = node->getNext();
	}
	std::cout << std::endl;
}

#endif