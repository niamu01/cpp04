/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 05:13:40 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 05:24:12 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("") {
	std::cout << PURPLE;
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	std::cout << RESET;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs) {
	std::cout << PURPLE;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	std::cout << RESET;
	*this = rhs;
}

WrongAnimal::~WrongAnimal() {
	std::cout << PURPLE;
	std::cout << "WrongAnimal Destructor called" << std::endl;
	std::cout << RESET;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {
	std::cout << PURPLE;
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	std::cout << RESET;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << PURPLE;
	std::cout << "WrongAnimal's... sound" << std::endl;
	std::cout << RESET;
}

const std::string	&WrongAnimal::getType() const {
	return (this->type);
}

std::ostream	&operator<<( std::ostream &out, const WrongAnimal &wronganimal ) {
	out << wronganimal.getType();;
	return out;
}