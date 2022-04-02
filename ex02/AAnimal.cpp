#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}
const std::string	&AAnimal::getType() const
{
	return (this->type);
}