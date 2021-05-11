/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:50:24 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 11:43:33 by forsili          ###   ########.fr       */
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
			this->arr = new T[0];
			len = 0;
		}

		Array(unsigned int n)
		{
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				this->arr[i] = 0;
			}
			
			len = n;
		}

		~Array()
		{
			delete[] this->arr;
		}

		T & operator[](unsigned int index)
		{
			if (index >= this->len)
				throw	Array::overException();
			return this->arr[index];
		}

		Array & operator=(Array &copy)
		{
			for (unsigned int i = 0; i < copy.len; i++)
			{
				this->arr[i] = copy.arr[i];
			}
			this->len = copy.len;
		}

		unsigned int size()
		{
			return this->len;
		}

		void	print()
		{
			for (unsigned int i = 0; i < this->len; i++)
			{
				std::cout << this->arr[i] << "|";
			}
			std::cout << "\n";
		}

		class overException: public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return "Exception index out of range\n";
				}
		};
};

