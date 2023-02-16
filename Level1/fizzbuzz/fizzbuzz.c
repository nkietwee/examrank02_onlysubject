/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:58:29 by nkietwee          #+#    #+#             */
/*   Updated: 2022/11/29 01:31:37 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printnum(int	i)
{
	if (i > 9)
	{
		ft_printnum (i / 10);
		ft_printnum (i % 10);
	}
	else 
		ft_putchar(i + 48 );
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz", 8);
		else if (i % 3 == 0 )
			write(1,"fizz", 4);
		else if ( i % 5 == 0)
			write(1,"buzz", 4);
		else
			ft_printnum(i);
		i++;
		write (1,"\n",1);
	}
	return (0);

}
