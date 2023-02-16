/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:41:26 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 14:33:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

// int     *ft_range(int start, int end)
// {
//     int i;
//     int diff;
//     int    *res;
    
//     i = 0;
//     if (start >= end)
//     {
//         res = (int *)malloc(sizeof(int) * (start  - end + 1));
//         diff = -1;
//     }
//     else  // start < end
//     {
//         res = (int *)malloc(sizeof(int) * (end - start + 1));
//         diff = 1;
//     }
//     while (start != end)
//     {
//         res[i] = start;
//         i++;
//         start += diff;
//     }
//     res[i] = start;
//     return(res);
// }
// int main(void)
// {
//     int     i;
    
//     i = 0;
//     // int *tab = ft_range(1, 3);
//     int *tab = ft_range(2147483647, 2147483640);

//     while(i < 10)
//         printf("%d\n" ,tab[i++]);

// }


int     *ft_range(int start, int end)
{
    int i;
    int new_start;
    int new_end;
    int size;
    int *tab;

    i = 0;
    new_start = start;
    new_end = end;
    if (new_start < 0)
        new_start = -new_start;
    else if (new_end < 0)
        new_end = -new_end;
    size = new_end - new_start  + 1;
    if (size < 0)
        size = -size;    
    // printf("size = %d\n", size);
    tab = (int *)malloc(sizeof(int) * size);
    if (start <= end)
    {
        while(start <= end)
            tab[i++] = start++; 
    }
    else 
    {
        while(start >= end)
            tab[i++] = start--; 
    }
    return(tab);
}

int main(void)
{
    int i;
    int *tab = ft_range(2147483647, 2147483640);

    i = 0;

       while (i < 10) 
        printf("%d\n" ,tab[i++]);

}