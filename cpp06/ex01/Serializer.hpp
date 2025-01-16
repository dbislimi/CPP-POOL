/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:13:34 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/14 16:22:42 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <stdint.h>
#include "Data.hpp"

class Serializer {
	private:
		Serializer(const Serializer& _);
		Serializer&	operator=(const Serializer& _);
		Serializer();
	
	public:
		~Serializer();
		
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif