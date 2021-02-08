/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:12:17 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 22:32:42 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	return (type);
}

void				Weapon::setType(const std::string& str)
{
	type = str;
}

Weapon::Weapon(const std::string& _type)
{
	type = _type;
}

Weapon::Weapon()
{
	type = "default club";
}
