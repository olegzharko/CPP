/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:04:17 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 19:04:40 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string		Brain::identify(void) const
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	return ss.str();
}
