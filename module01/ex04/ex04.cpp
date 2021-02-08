/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:16:48 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 18:20:33 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void		printUsingPointer(std::string* s)
{
	std::cout << *s << '\n';
}

void		printUsingReference(std::string& s)
{
	std::cout << s << '\n';
}

int			main()
{
	std::string str("HI THIS IS BRAIN");

	printUsingPointer(&str);
	printUsingReference(str);
}
