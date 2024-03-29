/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:27:47 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 17:08:18 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
: type("Wrong type")
{
	std::cout << ORNG "A wild WrongAnimal has been created." RST << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	this->type = a.type;
	std::cout << ORNG "An WrongAnimal just clone itself." RST << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
	this->type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << ORNG "A wild WrongAnimal has fled." RST << std::endl;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << ORNG "* Unrecognized WrongAnimal sound *" RST << std::endl;
}
