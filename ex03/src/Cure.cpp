/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:38:49 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:24:41 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
: AMateria("Cure")
{
	//std::cout << GRY1 "Default constructor called Cure" RST << std::endl;
}

Cure::Cure(const Cure &c)
: AMateria(c)
{
	//std::cout << GRY1 "Copy constructor called Cure" RST << std::endl;
}

Cure::~Cure(void)
{
	//std::cout << GRY1 "Default destructor called Cure" RST << std::endl;
}

Cure&	Cure::operator=(const Cure &c)
{
	if (this != &c)
		AMateria::operator=(c);
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << EMRD "* heals " GOLD;
	std::cout << target.getName();
	std::cout << EMRD "'s wound *" RST << std::endl;
}
