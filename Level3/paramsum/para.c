/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   para.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:30:03 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/12 23:49:35 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
// void    ft_putnbr(int num)
// {
//     if (num > 9)
//     {
//         ft_putnbr(num / 10);
//         ft_putnbr(num % 10);
//     }
//     else
//         // ft_putchar(num + '0');
// }

void    ft_putnbr(int num)
{
    if (num > 9)        
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}
int main(int argc, char *argv[])
{
    int i;
    int num;

    i = 0;
    num = argc - 1;
    (void)argv;
    ft_putnbr(num);


}