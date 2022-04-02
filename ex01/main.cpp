/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:06:23 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define COUNT_ANIMALS 8

int main()
{
	Animal *animals[COUNT_ANIMALS];
	Brain *brain;

	for (int i = 0; i < COUNT_ANIMALS; i++)
	{
		if (i < COUNT_ANIMALS / 2)
		{
			std::cout << std::endl;
			animals[i] = new Dog();
		}
		else
		{
			std::cout << std::endl;
			animals[i] = new Cat();
		}
		std::cout << animals[i]->getType() << std::endl;
	}

	std::cout << std::endl;
		brain = animals[7]->getBrain();
		brain->ideas[0] = "ideas0";
		brain->ideas[1] = "ideas1";
		brain->ideas[2] = "ideas2";
		brain->ideas[3] = "ideas3";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;
	std::cout << std::endl;

	*(animals[3]) = *(animals[7]);
	*(animals[5]) = *(animals[3]);
	
	std::cout << std::endl;
	std::cout << animals[3]->getBrain()->ideas[2] << std::endl;
	std::cout << std::endl;
	std::cout << animals[5]->getBrain()->ideas[3] << std::endl;

	for (int i = 0; i < COUNT_ANIMALS; i++)
	{
		std::cout << std::endl;
		delete animals[i];
	}
}
