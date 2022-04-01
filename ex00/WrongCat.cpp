#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN;
	std::cout << "WrongCat Default constructor called" << std::endl;
	std::cout << RESET;
	this->type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const &rhs) {
	std::cout << GREEN;
	std::cout << "WrongCat Copy constructor called"  << std::endl;
	std::cout << RESET;
	*this = rhs;
}
WrongCat::~WrongCat() {
	std::cout << GREEN;
	std::cout << "WrongCat Destructor called"  << std::endl;
	std::cout << RESET;
}
void	WrongCat::makeSound() const {
	std::cout << "meow!" << std::endl;
}
