/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:03:20 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 17:08:56 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << BLUE "🐶 A dog just appeared. Who's a gooood boyyyyy" RST << std::endl;
}

Dog::Dog(const Dog &d)
{
	this->type = d.type;
	std::cout << BLUE "🐶 A twin of our dog just appeared ! So cute." RST << std::endl;
}

Dog& Dog::operator=(const Dog &d)
{
	this->type = d.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << BLUE "🐶 The dog just left." RST << std::endl;
}

void	Dog::makeSound(void)
{
	std::cout << BLUE "🐶 WOOF WOOF (This is a dog sound)" RST << std::endl;
}
