/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:22:59 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 12:52:13 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->len = 0;
}

Span::Span(unsigned int len)
{
    this->len = len;
}

Span::Span(Span const & copy)
{
    for (int i=0; i < copy.arr.size(); i++)
        arr.push_back(copy.arr[i]);
    this->len = copy.len;
}

Span::~Span() {}

Span& Span::operator=(Span const& copy)
{
    for (int i=0; i < copy.arr.size(); i++)
        arr.push_back(copy.arr[i]);
    this->len = copy.len;
    return *this;
}

void    Span::addNumber(int n)
{
    if (this->arr.size() == len)
        throw Span::IndexOutOfRange();
    this->arr.push_back(n);
}

int     Span::shortestSpan()
{
    sort(arr.begin(), arr.end());
    int min = 100000000;
    if (arr.size() <= 1)
        throw Span::NoSpanPossible();
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        for (unsigned int k = 0; k < arr.size(); k++)
        {
                if (abs(this->arr[k] - this->arr[i]) < min && i != k)
                    min = abs(this->arr[k] - this->arr[i]);
        }
    }
    return min;
}

int     Span::longestSpan()
{
    sort(arr.begin(), arr.end());
    int max = 0;;
    if (arr.size() <= 1)
        throw Span::NoSpanPossible();
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        for (unsigned int k = 0; k < arr.size(); k++)
        {
                if (abs(this->arr[k] - this->arr[i]) > max && i != k)
                    max = abs(this->arr[k] - this->arr[i]);
        }
    }
    return max;
}