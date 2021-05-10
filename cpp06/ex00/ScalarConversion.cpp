/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:31:55 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 13:26:54 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{
    arg = "0";
}

ScalarConversion::ScalarConversion(char *arg)
{
    this->arg = arg;
}

ScalarConversion::ScalarConversion(ScalarConversion & copy)
{
    this->arg = copy.arg;
}

ScalarConversion::~ScalarConversion() {}

ScalarConversion& ScalarConversion::operator=(ScalarConversion const& copy)
{
    this->arg = copy.arg;
    return *this;
}

void    ScalarConversion::setArg(char *arg)
{
    this->arg = arg;
}

char    *ScalarConversion::getArg() const
{
    return this->arg;
}

int     ScalarConversion::check()
{
    std::string s(arg);
    float   n;
    try
    {
        if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
        {
            n = static_cast<float>(s[1]);
        }
        else
            n = stof(s);
        display(n);
    }
    catch (std::exception& e)
    {
        throw ScalarConversion::NotCastable();
    }
}

void    ScalarConversion::display(float n)
{
        displaychar(n);
        displayint(n);
        displayfloat(n);
        displaydouble(n);
}

void    ScalarConversion::displaychar(float n)
{
    std::cout << "char: ";
    if (n <= 32 || n > 126)
        throw ScalarConversion::NotDisplayable();
    else if (n == std::numeric_limits<float>::infinity() ||
            n == -std::numeric_limits<float>::infinity() ||
            std::isnan(n))
        throw ScalarConversion::ImpossibleToCast();
    else
        std::cout << static_cast<char>(n) << std::endl;
    
}

void    ScalarConversion::displayfloat(float n)
{
    std::cout << "float: " << n << std::endl;
}
void    ScalarConversion::displayint(float n)
{
    std::cout << "int: ";
    if (n > std::numeric_limits<int>::max() ||
        n < std::numeric_limits<int>::min() ||
        n > std::numeric_limits<float>::infinity() ||
        n == -std::numeric_limits<float>::infinity() ||
        std::isnan(n))
        throw ScalarConversion::ImpossibleToCast();
    else
        std::cout << static_cast<int>(n) << std::endl;
}
void    ScalarConversion::displaydouble(float n)
{
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}