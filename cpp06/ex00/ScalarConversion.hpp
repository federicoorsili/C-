/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:22:12 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 14:51:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>

class   ScalarConversion
{
    private:

        char    *arg;
        ScalarConversion();
    
    public:

        ScalarConversion(char *arg);
        ScalarConversion(ScalarConversion & copy);
        ~ScalarConversion();

        ScalarConversion& operator = (ScalarConversion const& copy);
        void    setArg(char *arg);
        char    *getArg() const;
        void     check();
        void    display(float n);
        void    displaychar(float n);
        void    displayfloat(float n);
        void    displayint(float n);
        void    displaydouble(float n);

        class ImpossibleToCast: public std::exception
		{
			public:
				virtual const char*	what() const throw()
                {
                    return "impossible";
                }
		};
        class NotDisplayable: public std::exception
		{
			public:
				virtual const char*	what() const throw()
                {
                    return "Non displayable";
                }
		};
        class NotCastable: public std::exception
		{
			public:
				virtual const char*	what() const throw()
                {
                    return "Error: not castable";
                }
		};
};

