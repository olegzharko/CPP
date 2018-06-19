/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:53:22 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 13:53:23 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
#include <iostream>

class Pony
{
	private:
	std::string	_name;

	public:
		Pony(void);
		~Pony(void);

	void			setPonyName(std::string str);
	std::string		getPonyName(void);
};

#endif