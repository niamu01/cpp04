#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}
const std::string	&AAnimal::getType() const
{
	return (this->type);
}