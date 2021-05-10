/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:24:05 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 16:35:36 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void    *serialize(void)
{
    int     n;
    char     c;
    Data    *out = new Data();
    
    srand(time(NULL));
    n = 24;
    for (int i = 0; i < n; i++)
    {
        c = rand() % (126 - 32 + 1) + 32;
        out->s1 += c;
    }
    out->i = rand() % 10120210;
    n = 24;
    for (int i = 0; i < n; i++)
    {
        c = rand() % (126 - 32 + 1) + 32;
        out->s2 += c;
    }
    return reinterpret_cast<void *>(out);
}

Data    *deserialize(void *row)
{
    return reinterpret_cast<Data *>(row);
}

int main()
{
    Data *s = new Data();

    s = deserialize(serialize());
    std::cout << s->s1 << std::endl;
    std::cout << s->i << std::endl;
    std::cout << s->s2 << std::endl;
    std::cout << sizeof(s->s1) + sizeof(int) + sizeof(s->s2) << std::endl;
    return 0;
}