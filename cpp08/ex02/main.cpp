/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:11:36 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 14:19:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
	std::cout << "is empty: " << mstack.empty() << std::endl;
	std::cout << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(21);
	mstack.push(33);
	mstack.push(42);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "is empty: " << mstack.empty() << std::endl;
	std::cout << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << std::endl;
	mstack.pop();
	std::cout << "top after pop: " << mstack.top() << std::endl;
	std::cout << std::endl;
	std::cout << "size after pop: " << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	return 0;
}