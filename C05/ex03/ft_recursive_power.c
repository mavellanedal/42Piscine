/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:26:13 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/18 09:40:24 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 5;
	printf("%d potencia %d = %d", nb, power, ft_recursive_power(nb, power));
}*/
