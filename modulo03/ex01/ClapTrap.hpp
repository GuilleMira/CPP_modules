/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:04:29 by guilmira          #+#    #+#             */
/*   Updated: 2022/07/16 16:40:05 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/* LIBRARIES */
#include <iostream>
#include <string>

/* Using virtual destructors, 
you can destroy objects without knowing 
their type — the correct destructor 
for the object is invoked using the 
virtual function mechanism. 
Note that destructors can also be declared as 
pure virtual functions for abstract classes. */

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap & operator=(ClapTrap const &rhs);

		virtual void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		int getHp(void) const;
		int getMp(void) const;
		int getDps(void) const;

		void setName(std::string const &name);
		void setHp(int hp);
		void setMp(int mp);
		void setDps(int dps);
		
	protected:
		std::string	_name;
		int			_hp;
		int			_mp;
		int			_dps;
};

#endif