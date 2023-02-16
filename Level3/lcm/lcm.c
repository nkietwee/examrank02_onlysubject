/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:44:22 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 09:46:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    n = 0;
    if (a == 0 || b == 0)
        return(0);
    if (a > b)
        n = a;
    if (b > a)
        n = a
        b;
}
int main(void)
{
    

}