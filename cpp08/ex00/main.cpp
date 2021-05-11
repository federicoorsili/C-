/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:59:17 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 12:06:41 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>    c;

    c.push_back(3);
    c.push_back(4);
    c.push_back(5);
    c.push_back(6);
    c.push_back(2);
    
    try{
        int a = easyfind(c, 2);
        std::cout << a << "\n";
        int b = easyfind(c, 6);
        std::cout << b << "\n";
        int d = easyfind(c, 3);
        std::cout << d << "\n";
        int e = easyfind(c, 7);
        std::cout << e << "\n";
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}