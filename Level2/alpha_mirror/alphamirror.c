/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:57:50 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 12:00:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 97 + 122 - argv[1][i];
                // argv[1][i] = 'z' - argv[1][i] + 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 65 + 90 - argv[1][i];
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    
}