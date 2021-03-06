/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:09:33 by guilmira          #+#    #+#             */
/*   Updated: 2022/05/16 19:31:42 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string name)
	:_type(name)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void		Weapon::setType(std::string name)
{ 
	this->_type = name; 
}

std::string	const & Weapon::getType() const 
{ 
	return (this->_type); 
}