/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:37:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 09:35:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char    tmp;

    i = 0;
    len = 0;
    while (str[len])
        len++;
    len = len - 1;
    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str [len] = tmp;
        i++;
        len--;
    }
    return(str);

}

int main(void)
{
    //char    *str = "Hello";
    char    str[] = "Hello";
    
    printf("%s" ,ft_strrev(str));


}