/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:02:32 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 19:06:23 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Brain*	Human::identify()
{
	return (brain.identify());
}

Brain&	Human::getBrain()
{
	return (brain);
}
