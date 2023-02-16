/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:59:33 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 22:19:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*
void	fprime(int	n)
{
	int	i;

	i = 2;
	if (n == 1)
		printf("1");
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
			if ( n != 1)
				printf("*");
			i = 2;
		}
		else
			i++;
	}
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
}*/

#include<stdio.h>

void    fprime(int num)
{
    int i;

    i = 2;
    if (num == 1)
        printf("1");
    while (num > 1)
    {
        if (num % i == 0)
        {
            printf("%d", i);
            num = num / i;
   			if (num != 1)         
				printf("*");
            i = 2;
        }
        else
            i++;
    }

}

int main(int argc, char *argv[])
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    printf("\n");

}