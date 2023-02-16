/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:34:05 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 23:47:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
/* int ft_strlen(char *str)
{
    char *count;

    count = str;    
    printf("%p", str);
    printf("%p", str);
    while(*str)
        str++;
    printf("%p", str);
    return (str - count);
    // return (count);
} */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str != 'l')
    {
        str++;
        i++;
    }
    // return(i);
    return(*str);
}

int main(void)
{
    printf("%d", ft_strlen("Helo"));

}