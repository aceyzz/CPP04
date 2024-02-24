/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:37:42 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:15:35 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &c);
		virtual ~Cure();

		Cure &operator=(const Cure &c);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
