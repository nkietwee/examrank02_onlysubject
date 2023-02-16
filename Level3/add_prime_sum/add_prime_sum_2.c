/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:49:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 09:33:02 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}
int ft_isprime(int num)
{
    int i;

    i = 3;
    if (num <= 1)
        return(0);
    if (num % 2 == 0 && num > 2)
        return(0);
    while (i < num)
    {
        if (num % i == 0)
            return(0);
        i++;
    }
    return(1);

}
int ftaddprime(int num)
{
    int i;
    int sum;

    i = 2;
    sum = 0;
    while( i <= num)
    {
        if (ft_isprime(i) == 1)
            sum = sum + i;
        i++;
    }
    return(sum);

}
int ft_atoi(char *str)
{
    int i;
    int res;;

    i = 0;
    res= 0;
    while(str[i])
    {
        res = (res * 10) + str[i] - 48;
        i++;
    }
    return(res);
}
int main(int argc,char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        ft_putnbr(ftaddprime(ft_atoi(argv[1])));
    }
    else 
        ft_putnbr(0);
    write(1, "\n", 1);


}