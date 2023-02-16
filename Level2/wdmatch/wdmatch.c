/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:27:02 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/08 15:37:35 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
    {
        while (argv[2][j])
        {
            if (argv[2][j] == argv[1][i])
            {
                    write(1, &argv[1][i], 1);
                    i++;
            }
            j++;
        }
    }
    // if (argc == 3)
    // {
    //     while (argv[1][i])
    //     {
    //         if (argv[1][i] == argv[2][j])
    //         {
    //                 write(1, &argv[1][i], 1);
    //                 i++;
    //         }
    //         j++;
    //     }
    // }
    write (1, "\n", 1);
}