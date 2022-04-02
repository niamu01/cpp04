/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 20:08:59 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define COUNT_AANIMALS 8

int main()
{
	AAnimal *AAnimals[COUNT_AANIMALS];
	Brain *brain;

	for (int i = 0; i < COUNT_AANIMALS; i++)
	{
		if (i < COUNT_AANIMALS / 2)
		{
			std::cout << std::endl;
			AAnimals[i] = new Dog();
		}
		else
		{
			std::cout << std::endl;
			AAnimals[i] = new Cat();
		}
		std::cout << AAnimals[i]->getType() << std::endl;
	}

	std::cout << std::endl;
		brain = AAnimals[7]->getBrain();
		brain->ideas[0] = "ideas0";
		brain->ideas[1] = "ideas1";
		brain->ideas[2] = "ideas2";
		brain->ideas[3] = "ideas3";
	std::cout << AAnimals[7]->getBrain()->ideas[0] << std::endl;
	std::cout << std::endl;

	*(AAnimals[3]) = *(AAnimals[7]);
	*(AAnimals[5]) = *(AAnimals[3]);
	
	std::cout << std::endl;
	std::cout << AAnimals[3]->getBrain()->ideas[2] << std::endl;
	std::cout << std::endl;
	std::cout << AAnimals[5]->getBrain()->ideas[3] << std::endl;

	for (int i = 0; i < COUNT_AANIMALS; i++)
	{
		std::cout << std::endl;
		delete AAnimals[i];
	}
}
