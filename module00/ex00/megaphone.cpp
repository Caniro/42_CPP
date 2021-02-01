/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 05:03:58 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/02 05:51:13 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
		std::cout << "WAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAKKKKKKKKKKKKKKKKKKKKKKKEEEEEEEEEEEUUUUUUUUUUUUUUUUUUUPPPPPPPPPPP!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
	else
	{
		i = 0;
		while (argv[++i])
		{
			std::string str = argv[i];
			for (size_t i = 0; i < str.size(); ++i)
				str[i] = toupper(str[i]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
}
