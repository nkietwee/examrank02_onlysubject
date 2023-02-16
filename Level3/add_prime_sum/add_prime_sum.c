/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:58:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 01:57:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int num)
{
	if(num > 9)
		ft_putnbr(num / 10);		
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
int	ft_isprime(int num)
{
	int	i;

	i = 3;
	if(num <= 1)
		return(0);
	if (num % 2 == 0 && num > 2)
		return(0);
	while(i < num)
	{
		if(num % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int	ft_addprime(int nbr)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= nbr) 
	{
		if (ft_isprime(i) == 1)
			sum = sum + i;
		i++;
	}
	return(sum);
}
int	main(int ac, char *av[])
{
	int	i;

	i  = 0;
	if(ac == 2)
	{
		ft_putnbr(ft_addprime(ft_atoi(av[1])));
	}
	// ft_putnbr(0);
	write(1, "\n", 1);
}






































/*#include <unistd.h> // For write

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
    	write(1, &"0123456789"[nbr % 10], 1);
}
int ft_is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num ))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] )
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	ft_add_prime_sum(int nbr)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	if (nbr <= 0)
		return (0);
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			sum = sum + i;
		i++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_add_prime_sum(ft_atoi((argv[1]))));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}*/


//---------------------------------------------------------
/* #include <unistd.h>
void	ft_putnbr(int nbr)
{
	char	digit_char;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		digit_char = nbr + '0';
		write(1, &digit_char, 1);
	}
}
int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}
int	ft_atoi(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (str[idx] != '\0')
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result);
}
int main(int argc, char *argv[])
{
	int sum = 0;
	int nb = ft_atoi(argv[1]);
	
	if (argc == 2)
	{
		while (nb > 0)
			if (is_prime(nb > 0))
			{
                nb--;
                sum += (nb + 1);
            }
        ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
} */