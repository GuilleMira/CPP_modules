/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:04:29 by guilmira          #+#    #+#             */
/*   Updated: 2022/07/14 12:42:43 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/* LIBRARIES */
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const &src);
		ScavTrap & operator=(ScavTrap const &rhs);

		void attack(std::string const & target);
		void guardGate(void);
};

#endif