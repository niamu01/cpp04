/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:48:46 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << CYAN;
	std::cout << "Dog Default constructor called" << std::endl;
	std::cout << RESET;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &rhs)
{
	std::cout << CYAN;
	std::cout << "Dog Copy constructor called" << std::endl;
	std::cout << RESET;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << CYAN;
	std::cout << "Dog Destructor called" << std::endl;
	std::cout << RESET;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << CYAN;
	std::cout << "Dog Assignement operator called" << std::endl;
	std::cout << RESET;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

AAnimal &Dog::operator=(AAnimal const &rhs)
{
	std::cout << CYAN;
	std::cout << "Dog: AAnimal Assignement operator called" << std::endl;
	std::cout << RESET;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
