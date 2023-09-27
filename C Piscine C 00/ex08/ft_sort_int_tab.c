void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[x] > tab[y])
			{
				temp = tab[x];
				tab[x] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		x++;
	}
}
