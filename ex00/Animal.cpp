/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:06:45 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 17:03:21 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal's... sound" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}

std::ostream &operator<<(std::ostream &out, const Animal &animal)
{
	out << animal.getType();
	return (out);
}
