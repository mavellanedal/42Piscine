/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:04:20 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/19 12:15:38 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb < 0 || nb == 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	nb;

	nb = 11;
	if (ft_is_prime(nb) == 1)
		printf("El numero %d SI es primo", nb);
	else
		printf("El numeor %d NO es primo", nb);
}*/
