/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:09:42 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 20:09:43 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}
const std::string	&AAnimal::getType() const
{
	return (this->type);
}