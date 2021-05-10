/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:22:12 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 13:16:15 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <cmath>

class   ScalarConversion
{
    private:

        char    *arg;
    
    public:

        ScalarConversion();
        ScalarConversion(char *arg);
        ScalarConversion(ScalarConversion & copy);
        ~ScalarConversion();

        ScalarConversion& operator = (ScalarConversion const& copy);
        void    setArg(char *arg);
        char    *getArg() const;
        int     check();
        void    display(float n);
        void    displaychar(float n);
        void    displayfloat(float n);
        void    displayint(float n);
        void    displaydouble(float n);

        class ImpossibleToCast: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
        class NotDisplayable: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
        class NotCastable: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

