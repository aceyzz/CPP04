/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:02:01 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 15:40:58 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "colors.hpp"
# include <string>
# include <iostream>
# define NB_MATERIA 4
# define NB_MATERIA_SRC 4

class	ICharacter;

class	AMateria
{
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &a);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &a);

		const std::string	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string type;
};

#endif
