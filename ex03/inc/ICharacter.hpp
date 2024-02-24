/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:44:05 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 08:48:11 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	ICharacter
{
	public:
		virtual ~ICharacter() {};

		virtual const std::string &getName() const = 0;

		virtual void	equip(AMateria *a) = 0;
		virtual void	unequip(int index) = 0;
		virtual void	use(int index, ICharacter &target) = 0;
};

#endif
