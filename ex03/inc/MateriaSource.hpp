/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:52:16 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 11:15:18 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

class	IMateriaSource;

class	MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator=(const MateriaSource &src);
		~MateriaSource();

		void	learnMateria(AMateria *materia);
		AMateria* createMateria(const std::string &type);
	
	private:
		AMateria*	_table[MAX_MATERIA];

};
