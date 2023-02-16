#include<unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);

}
void	ft_putnbr(int	num)
{
	if (num == -2147483648)
		write(1, "-2147483648", 11);
	else if (num >= 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);

}
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	(void)argv;
	if (argc > 0)
		ft_putnbr (argc - 1);
	write (1, "\n", 1);
	return (0);
}

//----------------------------------------------------------------------------------------------------------------

#include<unistd.h>

void	ft_putnbr(int	argc)
{
	if (argc > 9)
	{
		ft_putnbr(argc / 10);
		ft_putnbr(argc % 10);
	}
	else
		write(1 , &"0123456789"[argc % 10], 1);
}
int	main(int argc,char *argv[])
{
	int	i;

	i = 0;
	(void)argv;
	if(argc >= 0)
	{
		ft_putnbr(argc - 1);
	}
	write(1, "\n", 1);
}