/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:52:02 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/20 01:11:01 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

// int	ft_isspace(char c)
// {
// 	if ((c >= 9 && c <= 13) || c == 32)
// 		return(1);
// 	return(0);
// }

// int	ft_countsen(char *str)
// {
// 	int		i;

// 	i = 0;
// 	while(str[i])
// 	{
// 		if(ft_isspace(str[]))

// 	}


// }


// int	main(int argc, char *argv[])
// {
// 	int	i;
// 	int	start;
// 	int	end;
// 	int flag;

// 	i = 0;
// 	start = 0;
// 	end = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 			i++;
// 		// i = i - 1;
// 		while (i >= 0)
// 		{
// 			while(((ft_isspace(argv[1][i]) == 1) || argv[1][i] == '\0')) //isspace
// 				i--;
// 			end = i;
// 			// printf("end = %d\n", end);
// 			while(ft_isspace(argv[1][i]) == 0 && i >= 0) // alphabet
// 				i--;
// 			if (i >= 0)
// 				start = i + 1;
// 			else
// 				start = 0;
// 			flag = start;
// 			while(start <= end && end != -1)
// 			{
// 				write(1, &argv[1][start], 1);
// 				start++;
// 			}
// 			if(flag != 0)
// 				write(1, "-",1);
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// #include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int start;
// 	int end;
// 	int i = 0;

// 	if(argc == 2)
// 	{
// 		while(argv[1][i] != '\0') // count str
// 			i++;
// 		while(i >= 0)
// 		{
// 			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
// 				i--;
// 			end = i;
// 			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
// 				i--;
// 			start = i + 1;
// 			int  flag;
// 			flag = start;
// 			while(start <= end)
// 			{
// 				write (1, &argv[1][start],1);
// 				start++;
// 			}
// 			if (flag !=0)
// 			{
// 				write(1, " ", 1);
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }



// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>



// char	**ft_split(char *str)
// {
// 	int	i = 0;
// 	int	j;
// 	int	k = 0;
// 	char	**ret;
// 	char	*word;
// 	ret = malloc(sizeof(char *) * 5000);
// 	while (str[i])
// 	{
// 		j = 0;
// 		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
// 			i++;
// 		if (str[i])
// 			word = malloc(sizeof(char) * 5000);
// 		else
// 			break;
// 		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
// 			word[j++] = str[i++];
// 		word[j] = 0;
// 		ret[k++] = word;
// 	}
// 	ret[k] = NULL;
// 	return (ret);
// }

// void	ft_putstr(char *str)
// {
// 	int	len = 0;
// 	while (str[len])
// 		len++;
// 	write(1, str, len);
// }

// int	main(int ac, char **av)
// {
// 	int	i = 0;
// 	if (ac == 2)
// 	{
// 		char	**ret = ft_split(av[1]);
// 		while (ret[i] != NULL) // end of array 2d is  NULL (word)
// 			i++ ;// countword
// 		i = i - 1;
// 		while(i >= 0) // end of array 2d is  NULL (word)
// 		{
// 			ft_putstr(ret[i]);
// 			if (i != 0)
// 				write(1, " ", 1);
// 			i--;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

#include<unistd.h>
#include<stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	i = 0;
	start = 0;
	end = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			// while ((argv[1][i] < 33 || argv[1][i] == '\0' )&& i > 0)
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			end = i;
			// while (argv[1][i] > 33 && argv[1][i] && i > 0)
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			// printf("%d\n", flag);
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (flag  != 0)
				write(1, " ", 1);
		}	
	}
	write(1, "\n", 1);
}