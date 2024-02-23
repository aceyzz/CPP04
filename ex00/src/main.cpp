/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:44:33 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/23 10:10:06 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	std::cout << CLR;
	
	std::cout << GRY "///// TEST AVEC 2 ANIMALS /////" << std::endl;
	std::cout << GRY "// ANIMAL CONSTRUCTORS" << std::endl;
	Animal	a1;
	Animal	a2(a1);
	std::cout << GRY "// ANIMAL MAKESOUND" << std::endl;
	a1.makeSound();
	a2.makeSound();

	std::cout << std::endl << GRY "///// TEST AVEC 2 CAT /////" RST << std::endl;
	std::cout << GRY "// CAT CONSTRUCTORS" << std::endl;
	Cat		c1;
	Cat		c2(c1);
	std::cout << GRY "// CAT MAKESOUND" << std::endl;
	c1.makeSound();
	c2.makeSound();

	std::cout << std::endl << GRY "///// TEST AVEC 2 DOG /////" RST << std::endl;
	std::cout << GRY "// DOG CONSTRUCTORS" << std::endl;
	Dog		d1;
	Dog		d2(d1);
	std::cout << GRY "// DOG MAKESOUND" << std::endl;
	d1.makeSound();
	d2.makeSound();

	for (int i = 0; i < 3; i++)
		std::cout << std::endl;
	
	std::cout << GRY "///// TEST AVEC 2 WRONGS ANIMALS /////" << std::endl;
	std::cout << GRY "// WRONG ANIMAL CONSTRUCTORS" << std::endl;
	WrongAnimal	wa1;
	WrongAnimal	wa2(wa1);
	std::cout << GRY "// WRONG ANIMAL MAKESOUND" << std::endl;
	wa1.makeSound();
	wa2.makeSound();

	std::cout << std::endl << GRY "///// TEST AVEC 2 WRONG CAT /////" RST << std::endl;
	std::cout << GRY "// WRONG CAT CONSTRUCTORS" << std::endl;
	WrongCat		wc1;
	WrongCat		wc2(wc1);
	std::cout << GRY "// WRONG CAT MAKESOUND" << std::endl;
	wc1.makeSound();
	wc2.makeSound();

	std::cout << std::endl << GRY "///// TEST AVEC 2 WRONG DOG /////" RST << std::endl;
	std::cout << GRY "// WRONG DOG CONSTRUCTORS" << std::endl;
	WrongDog		wd1;
	WrongDog		wd2(wd1);
	std::cout << GRY "// WRONG DOG MAKESOUND" << std::endl;
	wd1.makeSound();
	wd2.makeSound();

	for (int i = 0; i < 3; i++)
		std::cout << std::endl;
	std::cout << std::endl << GRY "///// ALL DESTRUCTORS /////" RST << std::endl;
	return (0);
}
