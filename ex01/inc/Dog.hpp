/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:01:41 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 18:34:57 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		~Dog();

		void	makeSound();
		Brain*	getBrain() const;
	private:
		Brain *brain;
};

#endif
