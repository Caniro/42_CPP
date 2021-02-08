/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:39:13 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:52:08 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			ZOMBIEEVENT_HPP
# define		ZOMBIEEVENT_HPP

# include		"Zombie.hpp"
# include		<string>

class			ZombieEvent
{
private:
	std::string	type;
public:
	void		setZombieType(const std::string &_type);
	Zombie		*newZombie(std::string name);
};

#endif
