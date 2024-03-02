/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:09:11 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:31:26 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clap("zombieclap");
	ScavTrap scav("zombiescav");

	scav.guardGate();
	clap.attack("zombiescav");
	scav.takeDamage(20);
	scav.attack("zombieclap");
	clap.takeDamage(20);
	return (0);
}
