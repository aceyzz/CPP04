/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:14:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 20:07:06 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << CYAN "🐱 A cat just appeared. Hi Garfield !" RST << std::endl;
}

Cat::Cat(const Cat &d) : Animal(), brain(NULL)
{
	*this = d;
	std::cout << CYAN "🐱 A twin of our cat just appeared ! They're cute." RST << std::endl;
}

Cat& Cat::operator=(const Cat &d)
{
	if (this != &d)
	{
		this->type = d.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*d.brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << CYAN "🐱 The cat just left. He just wanted food." RST << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << CYAN "🐱 MEEOOOWWW (This is a cat sound)" RST << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
