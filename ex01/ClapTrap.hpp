/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:55:41 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:30:10 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		ClapTrap &operator=(ClapTrap const &obj);
		~ClapTrap();

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
