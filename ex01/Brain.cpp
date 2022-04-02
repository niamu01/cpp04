/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:05:38 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
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
