/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:19:05 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:27:11 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
}

Cure::Cure(const Cure &src)
{
	_type = src._type;
}

Cure& Cure::operator=(const Cure &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << PURP "* heals " GOLD << target.getName() << PURP "'s wounds *" RST << std::endl;
}
