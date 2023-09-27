#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
