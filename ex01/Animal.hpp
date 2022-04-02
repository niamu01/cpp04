/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:11:37 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(const Animal &src);
	virtual ~Animal();

	virtual Animal &operator=(const Animal &rhs);

	virtual void makeSound() const;
	const std::string &getType() const;

	virtual Brain *getBrain() const = 0;

protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);

#endif
