/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:46:47 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 12:04:26 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class NotFoundException: public std::exception
{
	public:
		virtual const char*	what() const throw()
		{
			return "Error: not found\n";
		}
};

template <typename T>
int     easyfind(T& arr, int val)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), val);
    if (it == arr.end() && *it != val)
    {
        throw NotFoundException();
    }
    return *it;
}