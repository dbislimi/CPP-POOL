/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:19:54 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 16:42:50 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T, typename Container >
MutantStack<T, Container>::MutantStack(): std::stack<T, Container>(){	
}

template< typename T, typename Container>
MutantStack<T, Container>::MutantStack(const Container& container): std::stack<T, Container>(container){
}

template< typename T, typename Container>
MutantStack<T, Container>::~MutantStack(){
}

template< typename T, typename Container>
bool	MutantStack<T, Container>::empty() const{
	return (this->c.empty());
}

template< typename T, typename Container>
size_t	MutantStack<T, Container>::size() const{
	return (this->c.size());
}

template< typename T, typename Container>
const typename MutantStack<T, Container>::reference&	MutantStack<T, Container>::top() const{
	return (this->c.top());
}

template< typename T, typename Container>
void	MutantStack<T, Container>::push(const value_type& val){
	this->c.push(val);
}

template< typename T, typename Container>
void	MutantStack<T, Container>::pop(){
	this->c.pop();
}

template< typename T, typename Container>
void	MutantStack<T, Container>::swap(MutantStack& x){
	this->c.swap(x.getStack());
}

template< typename T, typename Container>
const std::stack<T>&	MutantStack<T, Container>::getStack() const{
	return (this->c);
}

template< typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin() const{
	return (this->c.begin());
}

template< typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end() const{
	return (this->c.end());
}
