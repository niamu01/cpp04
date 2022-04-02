/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:27:22 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:27:23 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);
	virtual AAnimal &operator=(const AAnimal &rhs);

	virtual void makeSound() const;

	virtual Brain *getBrain() const;

private:
	Brain *brain;
};

#endif