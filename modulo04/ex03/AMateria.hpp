/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                        :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:04:27 by guilmira          #+#    #+#             */
/*   Updated: 2022/05/16 14:13:07 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#define ICE "Ice"
#define CURE "Cure"
#include <stdlib.h>

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria const &src);
		AMateria & operator=(AMateria const &rhs);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	
	protected:
		std::string _type;


};

class Ice : public AMateria
{
		Ice();
		~Ice();
		Ice(Ice const &src);
		Ice & operator=(Ice const &rhs);

		AMateria* clone() const;
};




#endif