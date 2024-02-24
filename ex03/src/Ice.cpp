/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:25:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 15:46:35 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	//std::cout << GRY1 "Default constructor called Ice" RST << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &i)
{
	//std::cout << GRY1 "Copy constructor called Ice" RST << std::endl;
	(void)i;
	this->type = "ice";
}

Ice::~Ice(void)
{
	//std::cout << GRY1 "Default destructor called Ice" RST << std::endl;
}

Ice&	Ice::operator=(const Ice &i)
{
	(void)i;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	std::cout << CYAN "* shoots an ice bolt at " GOLD;
	std::cout << target.getName();
	std::cout << CYAN " *" RST << std::endl;
}
