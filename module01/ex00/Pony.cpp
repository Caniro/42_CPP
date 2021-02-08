/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:59:01 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:00:59 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	name = "Fony";
	color = "Brown";
}

Pony::Pony(const std::string &_name, const std::string &_color)
{
	name = _name;
	color = _color;
}

void		Pony::explain(void)
{
	std::cout << name << " : My color is " << color << "!\n";
	std::cout << name << " : My address is " << this << "!\n";
}
