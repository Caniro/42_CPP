/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:52:14 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 17:04:05 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void		ZombieEvent::setZombieType(const std::string &_type)
{
	type = _type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
}
