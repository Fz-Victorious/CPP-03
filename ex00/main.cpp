/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:55:53 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:29:17 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap zombie("zombie");

	std::cout << std::endl;
	zombie.attack("victime");
	zombie.takeDamage(1);
	zombie.beRepaired(5);
	zombie.attack("victime");
	zombie.takeDamage(1);
	std::cout << std::endl;
}
