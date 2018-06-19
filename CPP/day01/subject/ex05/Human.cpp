/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:05:05 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 19:05:07 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

Brain const &	Human::getBrain(void)
{
	return (grey);
}


std::string		Human::identify(void)
{
	return (grey.identify());
}
