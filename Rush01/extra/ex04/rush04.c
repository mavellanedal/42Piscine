/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04-n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavella, alortiz-, fdonofri <marvin@42.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:36:46 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/07 21:05:05 by fdonofri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a);

void	fst_line(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(1);
		}
		else if (j < x)
		{
			ft_putchar(2);
		}
		else if (j == x)
		{
			ft_putchar(3);
		}
		j++;
	}
	write(1, "\n", 1);
}

void	mid_lines(int i, int j, int y, int x)
{
	while (i < y)
	{
		while (j <= x)
		{
			if (j == 1)
			{
				ft_putchar(2);
			}
			else if (j < x)
			{
				ft_putchar(4);
			}
			else
			{
				ft_putchar(2);
			}
			j++;
		}
		j = 1;
		i++;
		write(1, "\n", 1);
	}
}

void	lst_line(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(3);
		}
		else if (j < x)
		{
			ft_putchar(2);
		}
		else
		{
			ft_putchar(1);
		}
		j++;
	}
	write(1, "\n", 1);
}

int	error_m(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "ERROR: Valor invalido, Solo valores > 0\n", 41);
		return (0);
	}
	else
	{
		return (1);
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (error_m(x, y) == 1)
	{
		if (i++ == 1)
		{
			fst_line(j, x);
			j = 1;
		}
		if (i < y)
		{
			mid_lines(i, j, y, x);
			j = 1;
			i = y;
		}
		if (i++ == y)
		{
			lst_line(j, x);
			j = 1;
		}
	}
}
