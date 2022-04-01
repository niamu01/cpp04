#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RESET "\e[0m"
# define PURPLE "\e[35m"
# define GREEN "\e[32m"

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	~WrongAnimal( void );

	WrongAnimal	&	operator=(const WrongAnimal &rhs);

	void makeSound() const;
	const std::string &getType() const;

protected:
	std::string type;
};

std::ostream &	operator<<( std::ostream &out, const WrongAnimal &wronganimal );

#endif