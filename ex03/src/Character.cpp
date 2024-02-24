/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:55:31 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:46:22 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
: _name(name), _counter(0)
{
	// std<<cout << GRY1 "Default named constructor called Character" RST << std::endl;
	for (int i = 0; i < NB_MATERIA; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &c)
{
	// std<<cout << GRY1 "Copy constructor called Character" RST << std::endl;
	*this = c;
}

Character::~Character(void)
{
	// std<<cout << GRY1 "Default destructor called Character" RST << std::endl;
	for (int i = 0; i < this->_counter; i++)
		delete this->_inventory[i];
}

Character& Character::operator=(const Character &c)
{
	if (this != &c)
	{
		this->_name = c._name;
		for (int i = 0; i < this->_counter; i++)
			delete this->_inventory[i];
		for (int i = 0; i < c._counter; i++)
			this->_inventory[i] = c._inventory[i]->clone();
		this->_counter = c._counter;
	}
	return (*this);
}

void	Character::equip(AMateria *a)
{
	if (this->_counter < NB_MATERIA)
	{
		this->_inventory[this->_counter] = a;
		this->_counter++;
	}
}

void	Character::unequip(int index)
{
	if (index >= 0 && index < this->_counter)
	{
		for (int i = 0; i < (this->_counter - 1); i++)
			this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[this->_counter - 1] = NULL;
		this->_counter--;
	}
}

void	Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < this->_counter)
		this->_inventory[index]->use(target);
}

const std::string& Character::getName(void) const
{
	return (this->_name);
}

int Character::getCounter(void) const
{
	return (this->_counter);
}
