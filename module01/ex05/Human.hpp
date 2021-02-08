/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:01:22 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 19:06:22 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMAN_HPP
# define	HUMAN_HPP

# include	"Brain.hpp"

class		Human
{
private:
	Brain	brain;
public:
	Brain*	identify();
	Brain&	getBrain();
};

#endif
