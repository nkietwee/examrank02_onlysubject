/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fitstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:48:49 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/05 21:28:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc,char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13 )|| argv[1][i] == 32)		
			i++;
		while (!((argv[1][i] >= 9 && argv[1][i] <= 13 )|| argv[1][i]  == 32) && argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;	
		}
	}
	write (1,"\n", 1);
	return (0);
}


