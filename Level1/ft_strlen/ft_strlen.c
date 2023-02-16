/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 01:46:53 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/07 00:44:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

 */

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while(*str)
	{
		str++;
		len++;
	}
	return(len);
}

int	main(void)
{
	printf("%d\n",ft_strlen("Hello World"));
	printf("%lu",strlen("Hello World"));

}
