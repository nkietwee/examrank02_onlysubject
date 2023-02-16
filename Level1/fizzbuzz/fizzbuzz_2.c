/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:30:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/19 14:45:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}
void    ft_printnum(int i)
{
    if (i > 9)
    {
        ft_printnum (i / 10);
        ft_printnum (i % 10);
    }
    else
        ft_putchar(i + 48);
}


int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else
            ft_printnum(i);
        write (1, "\n", 1);
        i++;
    }
} */

/*
#include<unistd.h>

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);

}
int main(void)
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz" , 8);
        else if (i % 3 == 0)
            write(1, "fizz" , 4);
        else if ( i % 5 == 0)
            write(1, "buzz" , 4);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }

}*/


#include <unistd.h>
#include <stdio.h>

int is_fizz(int i)
{
        if (i == 3)
        {
            write(1, "fizz", 4);
            i = 0;
            return (i);
        }
}

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);

}

int main(void)
{
    int num = 1;
    int fizz = 1;
    int i = 1;

    while (num <= 100)
    {
        ft_putnbr(num++);
        // if (i == 3)
        // {
        //     write(1, "fizz", 4);
        //     i = 0;
        // }
        is_fizz(i);
        write(1, "\n", 1);
        i++;
    }
}