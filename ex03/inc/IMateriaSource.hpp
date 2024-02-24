/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:17:42 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:19:02 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		
		virtual void		learnMateria(AMateria *a) = 0;
		virtual AMateria*	createMateria(const std::string& type) = 0;
};

#endif
