/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:03:09 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:29:05 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "None";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: \"" << this->_Name << "\" Constructor called and joins the fight " << std::endl;
}

ClapTrap::ClapTrap( std::string Name )
{
	this->_Name = Name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: \"" << this->_Name << "\" Constructor called and joins The fight" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj )
{
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	/*if (this->_hitPoints == 0)
	  std::cout << "ClapTrap: \" " << this->_Name << " \" is Dead!" << std::endl;
	  else
	  std::cout << "ClapTrap: \" " << this->_Name << " \" is leaving the fight!" << std::endl;*/
	std::cout << "ClapTrap: \"" << this->_Name << "\" destructor called " << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &obj )
{
	if (this == &obj)
		return *this;
	this->_Name = obj._Name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

void	ClapTrap::attack( std::string const & target )
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap: \"" << this->_Name << "\" is Dead!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap: \"" << this->_Name << "\" attack " << target
			<< ", causing " << this->_attackDamage << " points of damage! ";
		std::cout << this->_Name << " lost 1 point of his enegiePoints, so he's EnergyPoints are now : " << this->_energyPoints << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	int newHitPoints = this->_hitPoints - amount;
	if (newHitPoints <= 0)
		newHitPoints = 0;
	if (this->_hitPoints != 0)
	{
		std::cout << "ClapTrap: \"" << this->_Name << "\" Take damage of " << amount << std::endl;
		std::cout << this->_Name << " \" HitPoints goes down from "
			<< this->_hitPoints << " to " << newHitPoints << std::endl;
		this->_hitPoints = newHitPoints;
		if (this->_hitPoints == 0)
			std::cout << "ClapTrap: \"" << this->_Name << "\" is Dead!" << std::endl;
	}
	else
		std::cout << "ClapTrap: \"" << this->_Name << "\" is Dead!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap: \"" << this->_Name << "\" is Dead!" << std::endl;
	else
	{
		int newHitPoints = this->_hitPoints + amount;
		this->_hitPoints = newHitPoints;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap: \"" << this->_Name << "\" adding " << amount << " to his HitPoint ";
		std::cout << " and lost 1 point of his enegiePoints, so he's EnergyPoints are now : " << this->_energyPoints;
		std::cout << " \"" << this->_Name << "\" HitPoints goes up to " << this->_hitPoints << std::endl;

	}
}
