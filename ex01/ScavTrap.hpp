/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:10:49 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/27 18:31:11 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string Name );
		ScavTrap( const ScavTrap & obj );
		~ScavTrap();
		ScavTrap & operator = ( const ScavTrap &obj );
		void	attack( std::string const & target );
		void	guardGate();
};

#endif
