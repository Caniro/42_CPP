/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:15:33 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:22:59 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			ZOMBIE_HPP
# define		ZOMBIE_HPP

# include		<string>
# include		<iostream>

class			Zombie
{
private:
	std::string	name;
	std::string	type;
public:
	Zombie();
	Zombie(const std::string &_name, const std::string &_type);
	void		announce(void);
};

#endif
