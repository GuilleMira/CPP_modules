/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:10:18 by guilmira          #+#    #+#             */
/*   Updated: 2022/04/17 15:03:58 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.h"

/** PURPOSE : Reads command line and loads it into a sieze 1000 buffer. 
 * The buffer is used in the stack as memory allocation is not permited.
*/
int	read_command(void)
{
	char command[1000];

	std::cin >> command;

	if (!strcmp(command, C1))
		return (TYPE_ADD);
	else if (!strcmp(command, C2))
		return (TYPE_SEARCH);
	if (!strcmp(command, C3))
		return (TYPE_EXIT);
	std::cout << MSG << std::endl;
	return (0);
}

void add_contact(void)
{
	Contact contact1;

	std::cout << "añadiendo" << std::endl;
	contact1.create_contact();

	return ;
}

/** PURPOSE : Execute search or add commands.
 * 1. Selects command according to the type. */
void	execute_command(int cmd)
{
	if (cmd == 1)
		add_contact();
	else
		std::cout << "busqueda" << std::endl;
}

/** EXECUTION : ./contacts_firstclass
 * This program will run a contact book.
 * ADD, SEARCH and EXIT accepted.									*/
int main(void)
{
	std::string str;
	str = "hello";
	std::cout << str << std::endl;

	int	cmd;

	cmd = 0;
	while (1)
	{
		cmd = read_command();
		if (cmd == TYPE_EXIT)
			break ;
		else if (cmd)
			execute_command(cmd);
	}
	
	return (0);
}