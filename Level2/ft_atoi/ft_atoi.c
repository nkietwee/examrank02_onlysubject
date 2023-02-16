/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:44:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 15:59:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sym;

    i = 0;
    result = 0;
    sym = 1;
    while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32 )
        i++;
    if (str[i] == '-')
    {         
        sym = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        // result = (result * 10) + str[i] - 48 ;
        result = (result * 10) + str[i] - '0' ;
        i++;
    }
    return(result * sym);
}

int main(void)
{
    printf("%d", ft_atoi("123"));
    printf("\n------------\n");
    printf("%d", atoi("123\n"));

}