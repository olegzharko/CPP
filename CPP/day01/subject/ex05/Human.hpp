/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:05:14 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 19:05:16 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"
#include <iostream>
#include <sstream>
class Human
{
public:

	Human(void);
	~Human(void);

	Brain const &	getBrain(void);
	std::string		identify(void);

	Brain const		grey;
};

#endif
