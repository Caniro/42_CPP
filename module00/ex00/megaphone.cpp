/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 05:03:58 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 22:53:55 by yuhan            ###   ########.fr       */
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
			for (size_t j = 0; j < str.size(); ++j)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
}
