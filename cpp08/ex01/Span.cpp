/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:11:32 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/27 17:20:12 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0){
}

Span::Span(unsigned int N): _N(N){
}

Span::Span(const Span& instance): _N(instance._N), _vct(instance._vct){
}

Span::~Span(){
}

Span&	Span::operator=(const Span& instance){
	if (this == &instance)
		return (*this);
	this->_N = instance._N;
	this->_vct = instance._vct;
	return (*this);
}

void	Span::addNumber(int n){
	if (this->_vct.size() >= this->_N)
		throw Span::MaxCapacity();
	this->_vct.push_back(n);
}


int	Span::shortestSpan(){
	int					min = -1;
	
	if (this->_vct.size() <= 1)
		throw Span::NotEnough();
	std::vector<int>	sorted(this->_vct);
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::iterator it = sorted.begin(); it != (sorted.end() - 1); ++it)
		if (min == -1 || *(it + 1) - *it < min)
			min = *(it + 1) - *it;
	return (min);
}

int	Span::longestSpan(){
	std::vector<int>	sorted(this->_vct);
	size_t	size = sorted.size();
	
	std::sort(sorted.begin(), sorted.end());
	return (sorted[size - 1] - sorted[0]);
}

void	Span::addList(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	size_t	size = this->_vct.size();
	
	for (; begin != end; ++begin){
		if (size >= this->_N)
			throw Span::MaxCapacity();
		this->_vct.push_back(*begin);
		++size;
	}
}
