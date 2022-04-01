/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 06:37:27 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Default constructor for Animal called" << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Destructor for Animal called" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "The sound every single animal on earth makes... I guess"
			  << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}

std::ostream &operator<<(std::ostream &ostream, const Animal &instance)
{
	ostream << instance.getType();
	;
	return ostream;
}
