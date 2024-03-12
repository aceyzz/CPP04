/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:18:11 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 10:44:53 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Cure : virtual public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		Cure& operator=(const Cure &src);
		~Cure();

		Cure* clone() const;
		void use(ICharacter &target);
};
