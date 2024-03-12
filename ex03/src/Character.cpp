/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:28:11 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:54:39 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "DefaultName";
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	_name = name;
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (src._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = src._inventory[i]->clone();
	}
	_name = src._name;
}

Character& Character::operator=(const Character &src)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (src._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = src._inventory[i]->clone();
	}
	_name = src._name;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

const std::string&	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = materia;
			std::cout << GOLD << _name << GRY2 ": equipped " PURP << materia->getType() << RST << std::endl;
			return ;
		}
	}
	std::cout << GOLD << _name << GRY2 ": no space left for " PURP << materia->getType() << RST << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << GOLD << _name << ORNG ": no Materia found at index " GOLD << idx << RST << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		std::cout << GOLD << _name << GRY2 ": remove from his inventory " PURP << _inventory[idx]->getType() << RST << std::endl;
		_inventory[idx] = NULL;
		return ;
	}
	std::cout << GOLD << _name << ORNG ": no Materia found at index " GOLD << idx << RST << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	std::cout << GOLD << _name << ORNG ": no Materia found at index " GOLD << idx << RST << std::endl;
}

AMateria*	Character::getMateria(int idx) const
{
	if (idx < 0 || idx > 3)
	{
		std::cout << GOLD << _name << ORNG ": no Materia found at index " GOLD << idx << RST << std::endl;
		return (NULL);
	}
	if (_inventory[idx])
		return (_inventory[idx]);
	std::cout << GOLD << _name << ORNG ": no Materia found at index " GOLD << idx << RST << std::endl;
	return (NULL);
}
