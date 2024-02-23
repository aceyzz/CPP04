/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:49:51 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 17:03:52 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class	Animal
{
	public:
		Animal();
		Animal(const Animal &a);
		Animal &operator=(const Animal &a);
		~Animal();

		void makeSound();
	protected:
		std::string type;
};

#endif
