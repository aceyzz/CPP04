/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:50:08 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/12 11:10:45 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria *src) = 0;
		virtual AMateria* createMateria(const std::string &type) = 0;
};
