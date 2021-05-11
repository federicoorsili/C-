/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:08:32 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 14:19:43 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <list>

template <typename T>
class  MutantStack: public std::stack<T>
{
    private:
        std::list<T>    stack;
    public:
        MutantStack<T>(/* args */)	{}
	    MutantStack<T>(MutantStack const &copy)
	    {
	    	this->stack = copy.stack;
	    }
	    MutantStack &operator = (MutantStack const &op)
	    {
	    	this->stack = op.getStack();
	    	return (*this);
	    }
	    ~MutantStack<T>()	{}
        bool    empty()
        {
            return this->stack.empty();
        }

        size_t  size()
        {
            return stack.size();
        }

        T&  top() 
        {
            return this->stack.front();
        }

        void    push(T const& n)
        {
            this->stack.push_front(n);
        }

        void    pop()
        {
            this->stack.pop_front();
        }

        typedef typename std::list<T>::iterator iterator;

        iterator  begin()
        {
            return this->stack.begin();
        }

        iterator   end()
        {
            return this->stack.end();
        }

};
