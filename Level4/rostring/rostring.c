/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:25:32 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 21:50:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
/*
int	main(int argc,char *argv[])
{
	int	i;
	int	start;
	int	end;
	int	word;

	i = 0;
	start = 0;
	end = 0;
	if(argc >= 2)
	{
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		start = i;
		while ((!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)) && argv[1][i])
			i++;
		end = i;
		while(argv[1][i])
		{
			while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
				i++;
			while (!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32) && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
				word  = 2;
			}
			if (word == 2)
				write(1, " ", 1);
		}
		while(start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}
//----------------------------------------------------------------------------------
#include<unistd.h>
int main(int argc, char *argv[])
{
    int i;
    int flag;
    int start;
    int end;
    int word;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i] == ' ' ||  argv[1][i] == '\t' )
            i++;
        start = i;
        while (argv[1][i] && (argv[1][i] != ' ' &&  argv[1][i] != '\t' ))
            i++;
        end = i;
        while (argv[1][i] == ' ' ||  argv[1][i] == '\t' )
            i++;
        while(argv[1][i])
        {
            word = 2;
            while (argv[1][i] != ' ' &&  argv[1][i] != '\t' && argv[1][i] != '\0')
            {
                write(1 , &argv[1][i], 1);
               i++;
            }
            while (argv[1][i] == ' ' &&  argv[1][i] == '\t' )
            {
                if (argv[1][i + 1] != '\0')
                    flag = 1;
                else
                    flag = 0;
                i++;
            }
            if (flag == 1)
                write(1, " ", 1);
        }
        if (word == 2)
            write (1, " ", 1);
        while (start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}*/


char **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **ret;
    char *word;

    i = 0;
    k = 0;
    ret = (char **)malloc(sizeof(char *) * 1000);
    while (str[i])
    {
        j = 0;
        while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            i++;
        if (str[i])
            word = (char *)malloc(sizeof(char) * 1000);
        else
            break;
        while (str[i] > 32 && str[i])
            word[j++] = str[i++];
        word[j] = '\0';
        // printf("---%s---\n", word);
        ret[k++] = word;
    }
    ret[k] = NULL;
    return (ret);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int len;
    char **ret;

    i = 1;
    len = 0;
    if (argc > 1)
    {
        ret = ft_split(argv[1]);
        while (ret[i] != NULL)
        {
            ft_putstr(ret[i]);
            free(ret[i]);
            write(1, " ", 1);
            i++;
        }
        ft_putstr(ret[0]);
    }
    write(1, "\n", 1);
    free (ret);
}