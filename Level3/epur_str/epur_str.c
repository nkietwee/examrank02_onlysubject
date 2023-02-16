/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:05:32 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/09 01:07:18 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            while(argv[1][i] >= 33 && argv[1][i] <= 126)
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i] !=  ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
                write(1, " ", 1);
        }   
    }
    write(1, "\n", 1);
}


































/* int main(int argc, char *argv[])
{
    int     i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] ==  '\t')
                i++;
        while(argv[1][i])
        {
            while (argv[1][i] >= 33 && argv[1][i] <= 126)
            {
                write (1, &argv[1][i], 1);
                i++;
            }
            while (argv[1][i] == ' ' || argv[1][i] ==  '\t')
                i++;
            if (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
                write (1, " ", 1);
        }
    }
    write(1, "\n", 1);
} */