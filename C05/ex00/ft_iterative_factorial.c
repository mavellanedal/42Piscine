/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:46:32 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/17 17:43:08 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb >= 2)
	{
		while (i != 1)
		{
			i--;
			nb = nb * i;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int	num1 = -2;
	printf("resultado de !%d es: %d", num1, ft_iterative_factorial(num1));
	printf("\n");
	int	num2 = 0;
    printf("resultado de !%d es: %d", num2, ft_iterative_factorial(num2));
 	printf("\n");
	int	num3 = 1;
    printf("resultado de !%d es: %d", num3, ft_iterative_factorial(num3));
	printf("\n");
	int	num4 = 5;
    printf("resultado de !%d es: %d", num4, ft_iterative_factorial(num4));
}*/
