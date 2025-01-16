/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:20:24 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 17:04:03 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
}

Serializer::Serializer(const Serializer& _){
	(void)_;
}

Serializer::~Serializer(){
}

Serializer&	Serializer::operator=(const Serializer& _){
	(void)_;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr){
	void	*voidptr = static_cast<void*>(ptr);
	return (reinterpret_cast<uintptr_t>(voidptr));
}

Data*		Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}
