/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:27:58 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 16:51:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc,char *argv[])
{
    int i;
    
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M' ))
                argv[1][i] = argv[1][i] + 13;
            else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z' )||( argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
                argv[1][i] = argv[1][i] - 13;
            write (1, &argv[1][i], 1);
            i++; 
        }
    }
    write (1,"\n", 1);
}