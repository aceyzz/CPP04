/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:32:17 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:08:17 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog &d);
		WrongDog &operator=(const WrongDog &d);
		~WrongDog();
};

#endif
