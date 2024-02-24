/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:19:51 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:16:15 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &i);
		virtual ~Ice();

		Ice &operator=(const Ice &i);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
