/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:54:55 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:24:09 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_table[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource()
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!src._table[i])
			_table[i] = NULL;
		else
			_table[i] = src._table[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_table[i])
			delete _table[i];
		if (!src._table[i])
			_table[i] = NULL;
		else
			_table[i] = src._table[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_table[i])
			delete _table[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!_table[i])
		{
			_table[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_table[i]->getType() == type)
			return (_table[i]->clone());
	}
	return (NULL);
}
