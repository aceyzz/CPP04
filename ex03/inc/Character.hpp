/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:22:08 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 12:52:07 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class	Character : virtual public ICharacter
{
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &src);
		Character& operator=(const Character &src);
		~Character();
	
		const std::string &getName() const;
		AMateria*	getMateria(int idx) const;

		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		std::string	_name;
		AMateria*	_inventory[MAX_MATERIA];
};
