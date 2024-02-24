/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:06:08 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:21:36 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
{
	//std::cout << GRY1 "Default constructor called AMateria" RST << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &a)
{
	//std::cout << GRY1 "Copy constructor called AMateria" RST << std::endl;
	*this = a;
}

AMateria::~AMateria(void)
{
	//std::cout << GRY1 "Default destructor called AMateria" RST << std::endl;
}

AMateria& AMateria::operator=(const AMateria &a)
{
	//std::cout << GRY1 "Assignement contructor called AMateria" RST << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

const std::string& AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	//std::cout << YLLW "Nothing should happens here - Abstract member function" RST << std::endl;
	(void)target;
}

