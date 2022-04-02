/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 05:29:45 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 18:05:39 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define RESET "\e[0m"
#define PURPLE "\e[35m"
#define GREEN "\e[32m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &rhs);

	void makeSound() const;
	const std::string &getType() const;

protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &wronganimal);

#endif