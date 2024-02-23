/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:25:40 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:13:31 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>
# define CLR "\033[2J\033[3J\033[H"
# define RST "\033[0m"
# define GRY "\033[1;30m"
# define RED "\033[1;31m"
# define GRE "\033[1;32m"
# define YEL "\033[1;33m"
# define BLU "\033[1;34m"
# define MAG "\033[1;35m"
# define CYA "\033[1;36m"
# define WHI "\033[1;37m"
# define D_GRY "\033[0;30m"
# define D_RED "\033[0;31m"
# define D_GRE "\033[0;32m"
# define D_YEL "\033[0;33m"
# define D_BLU "\033[0;34m"
# define D_MAG "\033[0;35m"
# define D_CYA "\033[0;36m"
# define D_WHI "\033[0;37m"
# define D_ORA "\033[0;38;2;195;115;0m"

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &w);
		WrongAnimal &operator=(const WrongAnimal &w);
		~WrongAnimal();

		void makeSound();
	protected:
		std::string type;
};

#endif
