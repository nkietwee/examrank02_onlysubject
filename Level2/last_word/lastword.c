/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:34:43 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 15:00:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && (argv[1][i + 1] >= 33 && argv[1][i] <= 126))
                j = i + 1;
            i++;
        }
        while (argv[1][j] >= 33 && argv[1][j] <= 126)
        {
            write(1, &argv[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);


}*/

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i = i - 1;
		while (argv[1][i] < 33 && i > 0)
			i--;
		while (!(argv[1][i] < 33) && i > 0)
			i--;
		//if (argv[1][i] > 32)
		i = i + 1;
		while (!(argv[1][i] < 33))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}