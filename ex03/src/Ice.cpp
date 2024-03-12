/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:17:12 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:27:09 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
: AMateria("ice")
{
}

Ice::Ice(const Ice &src)
{
	_type = src._type;
}

Ice& Ice::operator=(const Ice &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << CYAN "* shoots an ice bolt at " GOLD << target.getName() << CYAN " *" RST << std::endl;
}
