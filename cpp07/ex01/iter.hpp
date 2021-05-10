/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:30:24 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 18:49:20 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T, typename V, typename Z>
void    iter(T *address, V lenght, Z *func)
{
    for (V i = 0; i < lenght; i++)
    {
        address = func(address);
        address++;
    }
}

template <typename T>
T   func(T arr)