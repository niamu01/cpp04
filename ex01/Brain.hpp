/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 06:37:25 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:11:37 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define RESET "\e[0m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define PURPLE "\e[35m"
# define CYAN "\e[36m"

class Brain
{
private:
	static const int countIdeas = 100;

public:
	Brain(void);
	Brain(const Brain &src);
	~Brain(void);

	Brain &operator=(const Brain &rhs);

	std::string ideas[Brain::countIdeas];
};

#endif
