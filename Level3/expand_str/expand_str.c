/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:33:12 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 12:35:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
int main(int argc, char const *argv[])
{
    int i;
    int flag;

    flag = 0;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;


        while (argv[1][i]) //
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t')) // alphabet
            {
                // if (flag ) // flag == alphabet
                if (flag == 1 ) // flag == alphabet
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1)
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}*/



#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] < 33)
			i++;
		while (argv[1][i])
		{
			while ((!(argv[1][i] < 33)) && argv[1][i] != '\0')
			{
				write(1, &argv[1][i] , 1);
				i++;
			}
			while (argv[1][i] < 33 && argv[1][i] != '\0')
				i++;
			if (argv[1][i] == '\0')
				break;
			if (argv[1][i] != '\0')
				write(1,"   ", 3);
		}
	}
	write(1 ,"\n", 1);

}