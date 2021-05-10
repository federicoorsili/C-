/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:50:24 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 00:05:03 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int len;
	public:
		Array()
		{
			this->arr = new T[];
			len = 0;
		}

		Array(unsigned int n)
		{
			this->arr = new T[n];
			len = n;
		}

		~Array()
		{
			delete[] this->arr;
		}

		Array & operator[](int index)
		{
			return this->arr[index];
		}

		Array & operator=(Array &copy)
		{
			for (unsigned int i = 0; i < copy.len; i++)
			{
				this->arr[i] = copy.arr[i];
			}
			this->len = copy.len
		}

		unsigned int size()
		{
			return this->len;
		}
};

