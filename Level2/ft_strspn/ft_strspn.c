/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:57:40 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 23:17:45 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

/* size_t	ft_strspn(const char *s, const char *accept)
{


} */

int main(void)
{
    // printf("%lu" ,ft_strspn("Hello","He"));
    printf("strspn = %lu\n" ,strspn("World","Wod"));
    printf("strcspn = %lu\n" ,strcspn("World","l"));
}
