/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:28:42 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/08 21:46:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// int ft_check(char c, char *str,int index)
// {
//     int i;

//     i = 0;
//     while (str[i] && (i < index || index == -1))
//     {
//         if (str[i] == c)
//             return (1);
//         i++;
//     }
//     return(0);
// }

// int main(int argc, char *argv[])
// {   
//     int     i;

//     i = 0;
//     if (argc == 3)
//     {
//         while (argv[1][i])
//         {
//             // if (ft_check(argv[1][i] , argv[2], i) == 1 && ft_check(argv[2][i] , argv[2], -1) == 0)
//             // if (ft_check(argv[1][i] , argv[2], -1) == 1 && ft_check(argv[1][i] , argv[1], i)  == 0)
//             if (ft_check(argv[1][i] , argv[2], -1) == 1 && ft_check(argv[1][i] , argv[1], i)  == 0)
//             {
//                 write(1, &argv[1][i], 1);
//             }
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }


// int main(int argc, char *argv[])
// {   
//     int     i;

//     i = 0;
//     if (argc == 3)
//     {
//         while (argv[1][i])
//         {
//             if (ft_check(argv[1][i] , argv[2], i) == 1)
//             {
//                 if (ft_check(argv[1][i], argv[1], i) == 1)
//                 {
//                     write(1, &argv[1][i], 1);
//                 }
//             }
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }



// #include <unistd.h>

// int	iter(char *str, char c, int len)
// {
// 	int	i = 0;

// 	while (str[i] && (i < len || len == -1))
// 		if (str[i++] == c)
// 			return (1);
// 	return (0);
// }

// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	if (argc == 3)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			// if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
// 			if (iter(argv[1], argv[1][i], i) == 0 && iter(argv[2], argv[1][i], -1) == 1)
// 				write(1, &argv[1][i], 1);
// 			i += 1;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

int ft_check(char c,char *str, int index)
{
    int i;

    i = 0;
    while(str[i] && ((i < index) || index == -1))
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return (0);

}
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if(argc == 3)
    {
        while (argv[1][i])
        {
            if(ft_check (argv[1][i] ,argv[2], -1) == 1 && ft_check (argv[1][i] ,argv[1], i) == 0)
                write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}