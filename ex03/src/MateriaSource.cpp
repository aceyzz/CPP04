/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:27:09 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:02:59 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
: _counter(0)
{
	for (int i = 0; i < NB_MATERIA_SRC; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	*this = m;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_counter; i++)
		delete this->_materia[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &m)
{
	if (this != &m)
	{
		for (int i = 0; i < this->_counter; i++)
			delete this->_materia[i];
		for (int i = 0; i < m._counter; i++)
			this->_materia[i] = m._materia[i]->clone();
		this->_counter = m._counter;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *a)
{
	if (this->_counter < NB_MATERIA_SRC)
	{
		this->_materia[this->_counter] = a->clone();
		this->_counter++;
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < this->_counter; i++)
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}
