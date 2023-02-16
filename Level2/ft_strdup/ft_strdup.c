/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:38:20 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 16:49:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>


int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);

}
char    *ft_strdup(char *src)
{
    int i;
    int len;
    char    *dst;
    
    i = 0;
    if (!src)
        return (NULL);
    len = ft_strlen(src);
    dst = (char *)malloc(sizeof(char) * (len + 1));
    while (i < len) 
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int main(void)
{
    char tmp[] = "Hello";
    printf("%s", ft_strdup("Hello\n"));
    printf("%s", strdup(tmp));


}