/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:28:18 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 06:40:15 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << YELLOW;
	std::cout << "Cat Default constructor called" << std::endl;
	std::cout << RESET;
	this->type = "Cat";
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
}
void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}
