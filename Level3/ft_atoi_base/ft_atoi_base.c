/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:58:22 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/18 23:39:37 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


// int ft_checkbase(const char *str, int str_base)
// {
//     int i;
//     char    base[20];

//     i = 0;
//     base  = "0123456789abcdef"; // get a index


// }

int ft_checkbase(const char str, int str_base)
{
    int i;

    i = 0;
    if (str >= '0' && str <= '9')
    {
        if (str - '0' < str_base)
            return(1);
    }
    else if (str == 'A' || str == 'a')
    {
        if (str_base >= 11 && str_base <= 16)
            return(1);
    }
    else if (str == 'B' || str == 'b')
    {
        if (str_base >= 12 && str_base <= 16)
            return(1);
    }
    else if (str == 'C' || str == 'c')
    {
        if (str_base >= 13 && str_base <= 16)
            return(1);
    }
    else if (str == 'D'|| str == 'd')
    {
        if (str_base >= 14 && str_base <= 16)
            return(1);
    }
    else if (str == 'E'|| str == 'e')
    {
        if (str_base >= 15 && str_base <= 16)
            return(1);
    }
    else if (str == 'F'|| str == 'f')
    {
        if (str_base == 16)
            return(1);
    }
    return (0);
}
int ft_countnum(char c)
{
    if (c >= '0' && c <= '9')
        return(c - 48);
    else if (c >= 'a' && c <= 'f')
        return( 10 + (c - 97));
    else if (c >= 'A' && c <= 'F')
        return( 10 + (c - 65));
    return(0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int     i;
    int     neg;
    int     len;
    int     res;

    i = 0;
    res = 1;
    len = 0;
    neg = 1;
    while(str[i]) // check minus and number
    {
        while((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
            i++;
        if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
        {
            neg = -1;
            i++;
        }
        len = i;
        if (str[i] == '-' || ft_checkbase(str[i] , str_base) == 0)   
            return(0);
        i++;
    }
    while(str[len] && ft_checkbase(str[len], str_base) == 1)
    {
        res = (res * str_base) + ft_countnum(str[len]); 
        len++;
    }
    // while (str[i]) // check number
    // {
    //     if (ft_checkbase(str[i] , str_base) == 0)
    //         return(0);
    //     i++;
    // }
    // while(str[i] && ft_checkbase(str[i], str_base) == 1)
    // {
    //     res = (res * str_base) + ft_countnum(str[i]); 
    //     i++;
    // }
    return(res * neg);
}








#include<stdio.h>
int main(void)
{
    printf("%d" ,ft_atoi_base("-17" , 9));
}