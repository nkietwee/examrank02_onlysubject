/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base_final.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:40:04 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/18 23:46:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi_morethanten(char *str, int base)
{
	int sum = 0;
	int	i = 0;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] < 'a' + base - 10) || (str[i] >= 'A' && str[i] < 'A' + base - 10))
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum = sum * base + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			sum = sum * base + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			sum = sum * base + str[i] - 'A' + 10;
		i++;
	}
	return (sum);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sum = 0;
	int	i = 0;
	int sign = 1;

	while (str[i] < 33)// write ft_isspace first
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str_base <= 10)
	{
		while (str[i] >= '0' && str[i] < '0' + str_base)
		{
			sum = sum * str_base + str[i] - '0';
			i++;
		}
		return (sum * sign);
	}
	else
		return (ft_atoi_morethanten((char *)&str[i], str_base) * sign);

}


#include<stdio.h>


int	main(void)
{
	printf("%d", ft_atoi_base("13A", 16));
}
