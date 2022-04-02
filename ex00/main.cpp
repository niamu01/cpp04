/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:35:54 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 18:14:52 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	std::cout << std::endl;

	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;

	delete meta;
	delete cat;
	delete dog;
	std::cout << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	const WrongAnimal *metaWrong = new WrongAnimal();
	std::cout << std::endl;

	const WrongAnimal *catWrong = new WrongCat();
	std::cout << std::endl;

	std::cout << catWrong->getType() << " " << std::endl;
	std::cout << std::endl;

	catWrong->makeSound();
	metaWrong->makeSound();
	std::cout << std::endl;

	delete metaWrong;
	delete catWrong;
}