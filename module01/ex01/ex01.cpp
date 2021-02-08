/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:06:38 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:22:47 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string>
#include	<iostream>
#include	<unistd.h>

void		memoryLeak()
{
	std::string	*panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
	panther = NULL;
}

int			main()
{
	memoryLeak();
	usleep(100000000);
}
