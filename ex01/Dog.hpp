/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:44:39 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &rhs);
	~Dog();

	Dog &operator=(Dog const &rhs);
	virtual Animal &operator=(const Animal &rhs);

	virtual void makeSound() const;

	virtual Brain *getBrain() const;

private:
	Brain *brain;
};

#endif
