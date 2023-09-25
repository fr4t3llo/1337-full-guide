/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:03:31 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/08 10:41:19 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		ft_print(x / 10 + '0');
		ft_print(x % 10 + '0');
		ft_print(' ');
		ft_print(y / 10 + '0');
		ft_print(y % 10 + '0');
		if (x < 98)
			write(1, ", ", 2);
		if (++y > 99)
			y = ++x + 1;
	}	
}
