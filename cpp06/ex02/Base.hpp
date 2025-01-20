/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:17:09 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/20 18:02:09 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

# include <cstdlib>
# include <time.h>

class Base {
	public:
		virtual ~Base();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif