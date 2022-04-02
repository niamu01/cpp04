#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
public:
	virtual ~AAnimal();

	virtual AAnimal		&operator=(const AAnimal &rhs) = 0;

	virtual void		makeSound() const = 0;
	const std::string	&getType() const ;

	virtual Brain		*getBrain() const = 0;

protected:
	std::string type;
};

std::ostream	&operator<<( std::ostream &ostream, const AAnimal &instance );

#endif