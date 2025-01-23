/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:23:36 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/23 19:17:08 by dbislimi         ###   ########.fr       */
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
		~Array();
		Array<T>&	operator[](size_t i);
		
		size_t		size();
		T&			getContent() {return (this->_content);}
		Array<T>*	getNext() {return (this->_next);}
};

template< typename T >
std::ostream&	operator<<(std::ostream& output, Array<T>& v){
	while (v.getNext() != NULL){
		output << v.getContent() << ", ";
		v = *v.getNext();
	}
	return (output);
}

#include "Array.tpp"

#endif