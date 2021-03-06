/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:15:22 by guilmira          #+#    #+#             */
/*   Updated: 2022/05/17 12:31:55 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define DECIMAL_BIT_NBR 8

const int Fixed::_decimalBits = DECIMAL_BIT_NBR;

static void log(std::string const &str)
{
	std::cout << str << std::endl;
}

Fixed::Fixed()
	: _entero(0)
{
	log("Default constructor called.");
	return ;
}

//COPY CONSTRUCTOR.  THE NAME IS KEY. copy as in, creates a copy, a second object with same values.
//Class SOURCE and the new one just created are NOT the same.
//they dont have the same address.
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return ;
}
/* *this = src; 
this is actually the operator function being used
equivalent to:     this->operator=(src); */

Fixed::~Fixed()
{
	log("Destructor called.");
	return ;
}

/* IMPORTANT: why the return is Fixed &. is a reference, because the operation itself  ha a return.
This means:
a = b -> this, as we know, assigns to a the value of b. But also the operation (a = b) returns something.
This is easy to test, by doing something like if (a = b) . The same way, the operation assignation for classes has
to have a return, in this case, the return is the class that is assigned b refererence. */
Fixed & Fixed::operator=(Fixed const &rhs)
{
	log("Assignation operator called.");
	if (this != &rhs)
	{
		this->_entero = rhs.getRawBits();
		return (*this);
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	log("getRawBits member fuction called.");
	return (this->_entero);
}

void Fixed::setRawBits(int const raw)
{
	this->_entero = raw;
}