/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:48:46 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << YELLOW;
	std::cout << "Cat Default constructor called" << std::endl;
	std::cout << RESET;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &rhs)
{
	std::cout << YELLOW;
	std::cout << "Cat Copy constructor called" << std::endl;
	std::cout << RESET;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << YELLOW;
	std::cout << "Cat Destructor called" << std::endl;
	std::cout << RESET;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << YELLOW;
	std::cout << "Cat Assignement operator called" << std::endl;
	std::cout << RESET;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

AAnimal &Cat::operator=(AAnimal const &rhs)
{
	std::cout << YELLOW;
	std::cout << "Cat: AAnimal Assignement operator called" << std::endl;
	std::cout << RESET;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
