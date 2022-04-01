/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 06:39:20 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The sound every single animal on earth makes... I guess"
			  << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

std::ostream &operator<<(std::ostream &ostream, const WrongAnimal &instance)
{
	ostream << instance.getType();
	;
	return ostream;
}
