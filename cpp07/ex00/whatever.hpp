/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:21:52 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 18:28:22 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void    swap(T &x, T & y)
{
    T   temp;

    temp = x;
    x = y;
    y = temp;
}

template <typename T>
T   min(T x, T y)
{
    if (x >= y)
        return y;
    return x;
}

template <typename T>
T   max(T x, T y)
{
    if (x > y)
        return x;
    return y;
}