/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:19:54 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 12:39:05 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T, typename Container >
MutantStack<T, Container>::MutantStack(): _s(){	
}

template< typename T, typename Container>
MutantStack<T, Container>::MutantStack(const Container& container): _s(container){
}

template< typename T, typename Container>
MutantStack<T, Container>::~MutantStack(){
}

template< typename T, typename Container>
bool	MutantStack<T, Container>::empty() const{
	return (this->_s.empty());
}

template< typename T, typename Container>
size_t	MutantStack<T, Container>::size() const{
	return (this->_s.size());
}

template< typename T, typename Container>
const Container::reference&	MutantStack<T, Container>::top(){
	
}

void	MutantStack<T, Container>::push(const Container::reference& val);

void	MutantStack<T, Container>::pop();
void	MutantStack<T, Container>::swap(std::stack& x);