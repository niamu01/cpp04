/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:26:15 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:48:07 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

#define RESET "\e[0m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define PURPLE "\e[35m"
# define CYAN "\e[36m"

class Brain
{
private:
	static const int	countIdeas = 100;

public:
	Brain();
	Brain(const Brain &rhs);
	~Brain();

	Brain &operator=(const Brain &rhs);

	std::string ideas[Brain::countIdeas];
};

#endif