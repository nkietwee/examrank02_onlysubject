/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:21:22 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/09 10:07:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int max( int *tab, unsigned int len)
{
    int result;
    unsigned int i;

    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
        {
            result = tab[i];
        }
        i++;
    }
    return(result);
}

int	main(void)
{
	int	arr[4];

	arr[0] = 7;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 9;
    printf ("%d", max(arr, 4));
	return (0);
}