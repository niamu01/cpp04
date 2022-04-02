/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:09:45 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 20:09:46 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal &rhs);
	virtual ~AAnimal();

	virtual AAnimal		&operator=(const AAnimal &rhs) = 0;

	virtual void		makeSound() const = 0;
	const std::string	&getType() const ;

	virtual Brain		*getBrain() const = 0;

protected:
	std::string type;
};

std::ostream	&operator<<( std::ostream &out, const AAnimal &AAnimal );

#endif