/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:11:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 11:06:42 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	_type = type;
}

AMateria::AMateria(const AMateria &src)
{
	_type = src._type;
}

AMateria& AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Default attack (no type) on " << target.getName() << std::endl;
}
