/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan, fdonofri, alortiz- <marvin@42.fr> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:40:33 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/06 17:41:16 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	if (a == 1)
	{
		write(1, "o", 1);
	}
	if (a == 2)
	{
		write(1, "-", 1);
	}
	if (a == 3)
	{
		write(1, "|", 1);
	}
	if (a == 4)
	{
		write(1, " ", 1);
	}
}
