/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:30:29 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 09:30:30 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << CYAN "🐱 A WrongCat just appeared. Hi Garfield !" RST << std::endl;
}

WrongCat::WrongCat(const WrongCat &d)
{
	this->type = d.type;
	std::cout << CYAN "🐱 A twin of our WrongCat just appeared ! They're cute." RST << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &d)
{
	this->type = d.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << CYAN "🐱 The WrongCat just left. He just wanted food." RST << std::endl;
}
