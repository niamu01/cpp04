/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:45:26 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:45:27 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain Assignement operator called" << std::endl;
	for (int i = 0; i < Brain::countIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
