/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:20:24 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/20 17:15:56 by dbislimi         ###   ########.fr       */
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
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}
