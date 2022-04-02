/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:44:39 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define RESET "\e[0m"
# define GREEN "\e[32m"
# define PURPLE "\e[35m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &rhs);
	~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &rhs);

	void makeSound() const;
	const std::string &getType() const;

protected:
	std::string type;

private:
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &wronganimal);

#endif
