/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:59:23 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 13:59:25 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony*	heapPony = new Pony;
	std::cout << "Pony on the heap !" << std::endl;
    heapPony->setPonyName("Pinker");
    std::cout << "Pony name: " << heapPony->getPonyName() << std::endl;
	delete heapPony;
}

void	ponyOnTheStack(void)
{
	Pony	stackPony;
	std::cout << "Pony on the stack !" << std::endl;
    stackPony.setPonyName("Finker");
    std::cout << "Pony name: " << stackPony.getPonyName() << std::endl;
}

int		main()
{
	ponyOnTheHeap();
	ponyOnTheStack();

	return 0;
}
