/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:55:49 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/08 22:17:46 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_print(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        {
            if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && (str[i + 1] >= 'a' && str[i + 1] <= 'z')) 
            {    
                i++;
                str[i] = str[i] - 32;
            }
            else if (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && (str[i + 1] >= 'a' && str[i + 1] <= 'z')) 
            {    
                i++;
                str[i] = str[i] - 32;
            }
            write( 1, &str[i], 1);
            i++;
        }
}
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        while ( i < argc)
        {
            ft_print(argv[i]);
            i++;
        }
    }
    return (0);
}