/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:04:29 by guilmira          #+#    #+#             */
/*   Updated: 2022/07/14 12:39:19 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/* LIBRARIES */
#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap & operator=(ClapTrap const &rhs);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		int getHp(void) const;
		int getMp(void) const;
		int getDps(void) const;

		void setName(std::string const name);
		void setHp(int hp);
		void setMp(int mp);
		void setDps(int dps);
			
	private:
		std::string _name;
		int	_hp;
		int _mp;
		int _dps;
};

#endif