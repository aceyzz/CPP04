/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:14:02 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 09:14:26 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat();
		Cat(const Cat &d);
		Cat &operator=(const Cat &d);
		~Cat();

		void makeSound();
};

#endif
