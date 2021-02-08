/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:54:31 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 18:14:51 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ZOMBIEHORDE_HPP
# define	ZOMBIEHORDE_HPP

# include	"Zombie.hpp"
# include	<string>
# include	<random>

class		ZombieHorde
{
private:
	Zombie*	zombies;
	int		number;
public:
	ZombieHorde(int num);
	~ZombieHorde();
	void	announce();
};

#endif
