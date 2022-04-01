/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:48:15 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 05:19:58 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RESET "\e[0m"
# define YELLOW "\e[33m"
# define CYAN "\e[36m"

class Animal {
public:
	Animal();
	Animal(Animal const & rhs);
	virtual ~Animal();

	Animal &	operator=(Animal const & rhs);

	virtual void makeSound() const;
	const std::string &getType() const;
	
protected:
	std::string type;
};

std::ostream &	operator<<( std::ostream &out, const Animal &animal );

#endif
