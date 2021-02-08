/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 22:31:23 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 22:59:18 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& _name)
{
	name = _name;
}

void		HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << '\n';
}

void		HumanB::setWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}
