/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 22:31:23 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 22:47:35 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& _name, Weapon& _weapon)
: weapon(_weapon)
{
	name = _name;
	weapon = _weapon;
}

void		HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << '\n';
}
