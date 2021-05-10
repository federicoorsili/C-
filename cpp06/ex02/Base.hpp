/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:30:08 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 17:07:58 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Base
{
    public:

        virtual ~Base() = 0;
};

class A: public Base 
{
};

class B: public Base 
{
};

class C: public Base 
{
};

Base *generate(void);

void identify_from_pointer(Base *p);

void identify_from_reference(Base &r);
