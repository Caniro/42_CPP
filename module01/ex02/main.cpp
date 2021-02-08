/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:15:22 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 18:02:37 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <random>

std::string	getRandomString(int len)
{
	const char alnum[] = \
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	std::string	str;

	str.resize(len);
	srand(time(NULL));
	for (int i = 0; i < len; ++i)
		str[i] = alnum[rand() % (sizeof(alnum) - 2)];
	return (str);
}

void		randomChump(ZombieEvent &e, Zombie* &z)
{
	z = e.newZombie(getRandomString(10));
	z->announce();
	delete z;
}

int			main()
{
	ZombieEvent	e;
	Zombie*		z;

	e.setZombieType("undead");
	z = e.newZombie("first Zombie");
	z->announce();
	delete z;
	randomChump(e, z);
}
