/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:25:46 by forsili           #+#    #+#             */
/*   Updated: 2021/04/20 15:10:46 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int k = 0;

    if (argc == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (0);
    }
    while (argv[i])
    {
        k = 0;
        while (argv[i][k])
        {
            std::cout<<char(toupper(argv[i][k]));
            k++;
        }
        i++;
    }
        std::cout<<std::endl;
}