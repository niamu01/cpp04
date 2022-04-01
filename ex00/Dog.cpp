/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:28:18 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 05:22:33 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << CYAN;
	std::cout << "Dog Default constructor called" << std::endl;
	std::cout << RESET;
	this->type = "Dog";
}
Dog::Dog(Dog const &rhs) {
	std::cout << CYAN;
	std::cout << "Dog Copy constructor called"  << std::endl;
	std::cout << RESET;
	*this = rhs;
}
Dog::~Dog() {
	std::cout << CYAN;
	std::cout << "Dog Destructor called"  << std::endl;
	std::cout << RESET;
}
void	Dog::makeSound() const {
	std::cout << "woof!" << std::endl;
}

//Dog &	operator=(Dog const & rhs) {
//	std::cout << CYAN;
//	std::cout << "Dog Assignation operator called" << std::endl;
//	std::cout << RESET;
//	this->type = rhs.getType();
//	return (*this);
//}