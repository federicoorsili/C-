/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:32:35 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 17:20:59 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;

    if (n == 1)
        return new A();
    else if (n == 2)
        return new B();
    else
        return new C();
 }

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Is an A class\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Is an B class\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Is an C class\n";
    else
        std::cout << "not an A B or C class\n";
}

void identify_from_reference(Base &r)
{
    if (dynamic_cast<A*>(&r))
        std::cout << "Is an A class\n";
    else if (dynamic_cast<B*>(&r))
        std::cout << "Is an B class\n";
    else if (dynamic_cast<C*>(&r))
        std::cout << "Is an C class\n";
    else
        std::cout << "not an A B or C class\n";
}