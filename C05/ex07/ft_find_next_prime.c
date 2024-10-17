/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nex_prime.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:11:46 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/18 10:26:29 by mavellan         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	else
	{
		while (nb >= 2)
		{
			if (ft_is_prime(nb))
				return (nb);
			nb++;
		}
	}
	return (0);
}
/*int	main(void)
{
	int	nb;

	nb =  9;
	printf("El siguiente numero primo es el %d", ft_find_next_prime(nb));
}*/
