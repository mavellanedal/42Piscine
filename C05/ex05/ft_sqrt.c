/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:57:28 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/19 12:14:19 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i < 46360)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i ++;
	}
	return (0);
}

/*int	main(void)
{
	int	nb;

	nb = 9;
	printf("la raiz cuadrada de %d = %d", nb, ft_squrt(nb));
}*/
