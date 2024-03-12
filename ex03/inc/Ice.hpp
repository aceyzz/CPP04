/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:15:01 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 10:44:12 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		Ice& operator=(const Ice &src);
		~Ice();

		Ice* clone() const;
		void use(ICharacter &target);
};
