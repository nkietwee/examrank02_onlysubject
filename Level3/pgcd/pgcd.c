/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:46:17 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/14 00:46:20 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc,char *argv[])
{
	int	i;
	int	res;
	int	num1;
	int	num2;

	i = 1;
	res = 0;
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 == 0)
			return(num2);
		if (num2 == 0)
			return(num1);
		if (num1 < 0 || num2 < 0)
			return(0);
		while (i <= num1 || i <= num2)
		{
			if (num1 % i == 0 && num2 % i == 0)
				res = i;
			i++;
		}
		printf("%d",res);
	}

	printf("\n");
	//write(1, "\n", 1);
}