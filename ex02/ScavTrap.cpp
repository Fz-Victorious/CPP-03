/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:48:06 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:35:10 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_Name = "None";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: " << this->_Name << " Constructor called and joins The fight" << std::endl;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap( Name )
{
	this->_Name = Name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: " << this->_Name << " Constructor called and joins The fight" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & obj )
{
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: \"" << this->_Name << "\" destructor called" << std::endl;	
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &obj )
{
	if (this == &obj)
		return *this;
	this->_Name = obj._Name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap: \"" << this->_Name << " \" attack " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: \" " << this->_Name <<
		" \" has enterred in Gate Kepper mode" << std::endl;
}
