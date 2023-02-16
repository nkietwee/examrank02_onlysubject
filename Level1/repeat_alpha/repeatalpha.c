/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:17:29 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 00:39:19 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


void    ft_printalpha(char argv,int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        write (1, &argv, 1);
        i++;
    }

}
int main(int argc, char *argv[])
{
    int i;
    int count;

    i = 0;
    count = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i <= 'z'])
                count = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
                count = argv[1][i] - 64;
            else
                count = 1;
            ft_printalpha(argv[1][i], count);
            i++;
        }
    }
    write(1, "\n", 1);

}