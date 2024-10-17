/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:15:31 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/17 17:39:04 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	resultado = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	else
	{
		while (i < power)
		{
			i++;
			resultado = resultado * nb;
		}
	}
	return (resultado);
}
/*int	main(void)
{
	int nb1 = 5;
	int power1 = 5;
	printf("%d elevado a %d = %d", nb1, power1, ft_iterative_power(nb1, power1));
	printf("\n");
	int nb2 = 0;
    int power2 = 0;
    printf("%d elevado a %d = %d", nb2, power2, ft_iterative_power(nb2, power2));
    printf("\n");
	int nb3 = 3;
    int power3 = -1;
	printf("%d elevado a %d = %d", nb3, power3, ft_iterative_power(nb3, power3));
	printf("\n");
}*/
