/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:28:51 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/05 22:47:55 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* void	ft_putstr(char *str)
{
    int i;

    i = 0 ;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    // write (1, "\0", 1);
} */

/* void	ft_putstr(char *str)
{
	int	i = -1;

	while (str[i++])
		write(1, &str[i], 1);
} */

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
} */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

void	ft_putstr(char *str)
{
    if (!str)
        return;
    write (1, str ,ft_strlen(str));
}
#include <stdio.h>
int main(void)
{
    // printf("%s", ft_putstr("Hello "));
    ft_putstr("Hello ");
    return(0);


}