/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:42:55 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 17:26:18 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Errore, un parametro risulta assente" << std::endl;
		exit(0);
	}
	std::ifstream 	file_name(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		name_output(argv[1]);

	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Error: Paramentro vuoto" << std::endl;
		exit(0);
	}
	if (!file_name.is_open())
	{
		std::cout << "Error: Impossibile aprire il file in input" << std::endl;
		exit(0);
	}

	name_output = name_output + ".replace";
	std::ofstream	output(name_output);
	std::string		line;
	std::string		buffer;
	size_t			pos;
	
	if (!output.is_open())
	{
		std::cout << "Error: Impossibile aprire il file di output" << std::endl;
		file_name.close();
		exit(0);
	}
	
	while (getline(file_name, line))
	{
		buffer = buffer + line + "\n";
	}
	while ((pos = buffer.find(s1)) != std::string::npos)
	{
		buffer.replace(pos, s1.length(), s2);
	}
	buffer.replace(buffer.find_last_of("\n"), 1, "");
	output << buffer;
	file_name.close();
	output.close();
}