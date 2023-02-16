/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 01:51:13 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 00:16:48 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	// int	c;

	// c = *a;
	// *a = *b;
	// *b = c; 

	int	*c = NULL;

	*c = *a;
	*a = *b;
	*b = *c; 
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 10; 
	b = 5; 
	c = 3; 
	ft_swap(&a ,&b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);

}
