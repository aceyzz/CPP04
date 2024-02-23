/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:42:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 17:08:48 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	this->type = "WrongDog";
	std::cout << BLUE "🐶 A WrongDog just appeared. Who's a gooood boyyyyy" RST << std::endl;
}

WrongDog::WrongDog(const WrongDog &d)
{
	this->type = d.type;
	std::cout << BLUE "🐶 A twin of our WrongDog just appeared ! So cute." RST << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog &d)
{
	this->type = d.type;
	return (*this);
}

WrongDog::~WrongDog(void)
{
	std::cout << BLUE "🐶 The WrongDog just left." RST << std::endl;
}
