/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:20:38 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/24 10:17:34 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &m);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &m);

		virtual void		learnMateria(AMateria *a);
		virtual AMateria*	createMateria(const std::string& type);
	
	private:
		AMateria*	_materia[NB_MATERIA_SRC];
		int			_counter;
};

#endif
