#include <unistd.h>

void	ft_print(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		ft_print(str[i]);
		i++;
	}
}
