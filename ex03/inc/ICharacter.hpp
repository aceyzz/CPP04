/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:20:21 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:52:04 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "colors.hpp"
#include "AMateria.hpp"

class	AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria *materia) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
		virtual AMateria*	getMateria(int idx) const = 0;
};
