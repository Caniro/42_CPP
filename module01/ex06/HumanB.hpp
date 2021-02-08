/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:14:00 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 22:59:03 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			HUMANB_HPP
# define		HUMANB_HPP

# include		"Weapon.hpp"
# include		<string>
# include		<iostream>

class			HumanB
{
private:
	Weapon*		weapon;
	std::string	name;
public:
	HumanB(const std::string& _name);
	void		attack();
	void		setWeapon(Weapon& _weapon);
};

#endif
