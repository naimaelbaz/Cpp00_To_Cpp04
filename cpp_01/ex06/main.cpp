/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:06:08 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/28 18:16:52 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char const *av[])
{
	Harl h;
	if (ac != 2)
	{
		std::cout<<"invalid number of args!!";
		return 0;
	}
	h.complain(av[1]);
	return 0;
}
