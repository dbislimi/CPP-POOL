/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:22:07 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/26 15:58:36 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

template< typename T >
typename T::iterator	easyfind(T& container, int n){
	return (std::find(container.begin(), container.end(), n));
}

#endif