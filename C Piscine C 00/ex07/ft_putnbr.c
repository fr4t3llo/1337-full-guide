#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_print('-');
		ft_putnbr(nbr * -1);
	}
	else if (nbr < 10)
	{
		ft_print((char)(nbr + '0'));
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_print((char)(nbr % 10 + '0'));
	}
}
