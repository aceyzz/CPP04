/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:27:47 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:14:11 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
: type("Wrong type")
{
	std::cout << D_ORA "A wild WrongAnimal has been created." RST << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	this->type = a.type;
	std::cout << D_ORA "An WrongAnimal just clone itself." RST << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
	this->type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << D_ORA "A wild WrongAnimal has fled." RST << std::endl;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << D_ORA "* Unrecognized WrongAnimal sound *" RST << std::endl;
}
