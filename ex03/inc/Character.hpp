/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:48:32 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 09:44:25 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
		Character(const std::string &name);
		Character(const Character &c);
		~Character();

		Character &operator=(const Character &c);

		const std::string&	getName() const;
		int					getCounter() const;

		void	equip(AMateria *a);
		void	unequip(int index);
		void	use(int index, ICharacter &target);
	
	private:
		std::string	_name;
		AMateria*	_inventory[NB_MATERIA];
		int			_counter;
};

#endif
