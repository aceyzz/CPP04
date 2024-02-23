/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:53:07 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 18:43:09 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
: type("No type")
{
	std::cout << GRY2 "A wild animal has been created." RST << std::endl;
}

Animal::Animal(const Animal &a)
{
	this->type = a.type;
	std::cout << GRY2 "An animal just clone itself." RST << std::endl;
}

Animal& Animal::operator=(const Animal &a)
{
	this->type = a.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << GRY2 "A wild animal has fled." RST << std::endl;
}

void	Animal::makeSound(void)
{
	std::cout << GRY2 "* Unrecognized animal sound *" RST << std::endl;
}
