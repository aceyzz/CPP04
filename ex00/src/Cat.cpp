/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:14:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:12:01 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << D_CYA "🐱 A cat just appeared. Hi Garfield !" RST << std::endl;
}

Cat::Cat(const Cat &d)
{
	this->type = d.type;
	std::cout << D_CYA "🐱 A twin of our cat just appeared ! They're cute." RST << std::endl;
}

Cat& Cat::operator=(const Cat &d)
{
	this->type = d.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << D_CYA "🐱 The cat just left. He just wanted food." RST << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << D_CYA "🐱 MEEOOOWW (This is a cat sound)" RST << std::endl;
}
