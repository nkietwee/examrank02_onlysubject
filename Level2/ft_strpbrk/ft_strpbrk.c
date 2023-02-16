/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:57:16 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 23:33:30 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int j;

    j = 0;
    while(*s1)
    {
        j = 0;
        while(s2[j])
        {
            if(*s1 == s2[j])
                return((char *)s1);
            j++;
        }
        s1++;
    }
    return(NULL);
}




/* char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c)
			return ((char *)s);
		idx++;
	}
	return (NULL);
} */

/* char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
} */
int main () {
   const char s1[] = "Helloworld";
   const char s2[] = "Aew";

   const char s3[] = "Helloworld";
   const char s4[] = "Aew";

   char *result1;
   char *result2;
   
   result1 = strpbrk(s1, s2);
   result2 = ft_strpbrk(s3, s4);

   printf("The matching character : %c\n", *result1);
   
   printf("ft = %c\n" , *result2);
}