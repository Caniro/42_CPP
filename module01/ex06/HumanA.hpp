/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:14:00 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 22:55:50 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			HUMANA_HPP
# define		HUMANA_HPP

# include		"Weapon.hpp"
# include		<string>
# include		<iostream>

class			HumanA
{
private:
	Weapon&		weapon;
	std::string	name;
public:
	HumanA(const std::string& _name, Weapon& _weapon);
	void		attack();
};

#endif
