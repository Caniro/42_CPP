/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:58:34 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 18:15:21 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	getRandomString(int len)
{
	const char alnum[] = \
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	std::string	str;

	str.resize(len);
	for (int i = 0; i < len; ++i)
		str[i] = alnum[rand() % (sizeof(alnum) - 2)];
	return (str);
}

ZombieHorde::ZombieHorde(int num)
{
	number = num;
	zombies = new Zombie[num];

	srand(time(NULL));
	for (int i = 0; i < num; ++i)
		zombies[i] = Zombie(getRandomString(10), "undead");
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	zombies = NULL;
	number = 0;
}

void		ZombieHorde::announce()
{
	for (int i = 0; i < number; ++i)
		zombies[i].announce();
}
