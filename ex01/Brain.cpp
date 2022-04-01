/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 06:38:49 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor for Brain called" << std::endl;
	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Destructor for Brain called" << std::endl;
	return;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < Brain::numberOfIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
