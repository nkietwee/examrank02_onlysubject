/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:55:47 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 16:28:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int    ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);

    // while(s1[i] && s2[i])
    // {
    //     if (s1[i] == s2[i])
    //         return(s1[i] - s2[i]);
        
    //     i++;
    // }
    // return(0);
}

int main(void)
{
    // char s1[10] = "aA";
    // char s2[10] = "yA";

    // char s3[10] = "a";
    // char s4[10] = "y";
    
    printf("ft = %d\n" ,ft_strcmp("aA", "yA"));
    printf("%d\n" ,strcmp("aA", "yA"));
    // printf("%d\n" ,strcmp(s1, s2));

    // printf("ft = %d\n" ,ft_strcmp(s3, s4));
    // printf("%d\n" ,strcmp("a", "y"));

}


/* int main(void)
{
    printf("ft = %d\n" ,ft_strcmp("Helloa", "Hello")); 
    printf("%d\n" ,strcmp("Helloa", "Hello")); 
    
    printf("ft = %d\n" ,ft_strcmp("Hello", "Hello")); 
    printf("%d\n" ,strcmp("Hello", "Hello"));

    printf("ft = %d\n" ,ft_strcmp("AHello", "Hello")); 
    printf("%d\n" ,strcmp("CHello", "CHello"));  

    return (0);
}

 */