/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:18:08 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:48:21 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "yuhan";
	type = "default";
}

Zombie::Zombie(const std::string &_name, const std::string &_type)
{
	name = _name;
	type = _type;
}

void		Zombie::announce(void)
{
	std::cout << '<' << name << " (" << type << ")> Braiiiiiiinnnssss...\n";
}
