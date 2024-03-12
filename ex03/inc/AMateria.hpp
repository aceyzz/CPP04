/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:07:55 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 11:08:07 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "colors.hpp"
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		AMateria& operator=(const AMateria &src);
		virtual ~AMateria();

		const std::string &getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	
	protected:
		std::string _type;
};
