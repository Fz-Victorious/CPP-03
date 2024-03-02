/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:43:24 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:36:03 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap clap("zombieclap");
	ScavTrap scav("zombiescav");
	FragTrap frag("zombiefrag");

	scav.guardGate();
	frag.highFivesGuys();
	clap.attack("fragger");
	frag.takeDamage(20);
	frag.attack("clapper");
	clap.takeDamage(20);
	return (0);
}
