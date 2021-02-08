/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:53:29 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:22:23 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Pony.hpp"
#include	<unistd.h>

void		ponyOnTheHeap(void)
{
	Pony	*p = new Pony("Hony", "White");

	p->explain();
	delete p;
	p = NULL;
}

void		ponyOnTheStack(void)
{
	Pony	p;

	p.explain();
}

int			main(void)
{
	std::cout << "- ponyOnTheStack -\n";
	ponyOnTheStack();
	std::cout << "- ponyOnTheHeap -\n";
	ponyOnTheHeap();
	usleep(100000000);
}
