/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:14:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 17:09:07 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << CYAN "🐱 A cat just appeared. Hi Garfield !" RST << std::endl;
}

Cat::Cat(const Cat &d)
{
	this->type = d.type;
	std::cout << CYAN "🐱 A twin of our cat just appeared ! They're cute." RST << std::endl;
}

Cat& Cat::operator=(const Cat &d)
{
	this->type = d.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << CYAN "🐱 The cat just left. He just wanted food." RST << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << CYAN "🐱 MEEOOOWW (This is a cat sound)" RST << std::endl;
}
