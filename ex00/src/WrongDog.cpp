/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:42:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:11:32 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	this->type = "WrongDog";
	std::cout << D_BLU "🐶 A WrongDog just appeared. Who's a gooood boyyyyy" RST << std::endl;
}

WrongDog::WrongDog(const WrongDog &d)
{
	this->type = d.type;
	std::cout << D_BLU "🐶 A twin of our WrongDog just appeared ! So cute." RST << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog &d)
{
	this->type = d.type;
	return (*this);
}

WrongDog::~WrongDog(void)
{
	std::cout << D_BLU "🐶 The WrongDog just left." RST << std::endl;
}
