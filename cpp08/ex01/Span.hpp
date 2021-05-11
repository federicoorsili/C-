/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:20:04 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 12:41:01 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

class Span
{
    private:

        std::vector<int>    arr;
        unsigned int        len;

    public:

        Span();
        Span(unsigned int len);
        Span(Span const & copy);
        ~Span();
        Span& operator=(Span const& copy);
        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        class IndexOutOfRange: public std::exception
        {
	        public:
		        virtual const char*	what() const throw()
		        {
			        return "Error: index out of range\n";
		        }
        };
        class NoSpanPossible: public std::exception
        {
	        public:
		        virtual const char*	what() const throw()
		        {
			        return "Error: no span possible, to few numbers in the array\n";
		        }
        };
};
