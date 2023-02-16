/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:07:36 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/15 14:52:24 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	    is_power_of_2(unsigned int n)
{   
    unsigned int i;
    unsigned int stop;

    i = 1;
    stop = -1; // overflow 
    stop = (stop / 2) + 2; // plus 2 because protect max int
    while (i <= n && i < stop)
    {
        if (i == n)
            return(1);
        i = i * 2;
    }
    return(0);
}

int main(void)
{
    printf("%d", is_power_of_2(-3));
}

// -------------------------testexam----------
#include<unistd.h>
#include<stdio.h>
int	    is_power_of_2(unsigned int n)
{
	unsigned int	i;
	unsigned int	stop;

	i = 1;
	stop = -1;
	// stop = stop / 2;
	while (i <= n && i < stop / 2)
	{
		if (i == n)
			return(1);
		i= i * 2;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n" , is_power_of_2(1));
	printf("%d\n" , is_power_of_2(8));
	printf("%d\n" , is_power_of_2(-3));

}*/