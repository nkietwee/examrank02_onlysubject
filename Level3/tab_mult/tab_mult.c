/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:34:29 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/14 20:36:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
/*
int	ft_countnum(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return(1);
	while ( num > 0)
	{
		len++;
		num = num / 10;
	}
	return(len);
}
int	ft_itoa(int num)
{
	int	i;
	int	len;

	len = ft_countnum(num;)
	char	str[len];

	i = 0;
	if (num == 0)
	{
		num[0] = 0;
		num[1] = '\0';
	}
    // len = len - 1;
	while (num > 0)
	{
		str[len] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return(str);

}
*/

void	ft_putnbr(int	num)
{
	int	i;

	i = 0;
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		write(1, &"0123456789"[num % 10], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return(res);

}
int	main(int argc,char *argv[])
{
	int	num;
	int	res;

	num = 1;
	if (argc == 2)
	{
		res = ft_atoi(argv[1]);
		while (num <= 9)
		{
			ft_putnbr(num);
			write(1, " x ", 3);
			ft_putnbr(res);
			write(1, " = ", 3);
			ft_putnbr(num * res);
		//	if( num < 9)
			//	write(1, "\n", 1);
			if (num == 9)
				break;
			write(1, "\n", 1);
			num++;
		}
	}
	write(1, "\n", 1);
	return(0);
}