/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:09:53 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/09 09:31:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;
	
	i = 8;
	bit = 0;
	while(i > 0)
	{
		bit = (bit * 2) + (octet % 2);
		octet = octet / 2 ;
		i--;
	}
	return(bit);

}
int main(void)
{
    printf("%hhu" ,reverse_bits(57));

}