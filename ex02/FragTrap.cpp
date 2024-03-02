/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:40:28 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:34:35 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Name = "Nobody";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: \"" << this->_Name << "\" constructor called and joins The fight" << std::endl;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap( Name )
{
	this->_Name = Name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: \"" << this->_Name << "\" constructor called and joins The fight" << std::endl;
}

FragTrap::FragTrap( const FragTrap & obj )
{
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: \"" << this->_Name << "\" destructor called " << std::endl;
}

FragTrap & FragTrap::operator = ( const FragTrap &obj )
{
	if (this == &obj)
		return *this;
	this->_Name = obj._Name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: \"" << this->_Name << "\" asks for a High Fives" << std::endl;
}
