/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:26:15 by yeju              #+#    #+#             */
/*   Updated: 2022/04/02 19:27:05 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	static const int	countIdeas = 100;

public:
	Brain();
	Brain(const Brain &src);
	~Brain();

	Brain &operator=(const Brain &rhs);

	std::string ideas[Brain::countIdeas];
};

#endif