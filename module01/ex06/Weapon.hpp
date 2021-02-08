/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:09:12 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 19:47:59 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef					WEAPON_HPP
# define				WEAPON_HPP

# include				<string>

class					Weapon
{
private:
	std::string			type;
public:
	Weapon(const std::string& _type);
	Weapon();
	const std::string&	getType();
	void				setType(const std::string& str);
};

#endif
