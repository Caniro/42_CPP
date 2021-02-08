/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:53:49 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/07 16:21:42 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			PONY_HPP
# define		PONY_HPP

# include		<string>
# include		<iostream>

class			Pony
{
public:
	std::string name;
	std::string color;
public:
	Pony();
	Pony(const std::string &_name, const std::string &_color);
	void		explain(void);
};

#endif
