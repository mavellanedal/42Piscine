/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:06:49 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/17 17:41:40 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*int main(void)
{
    int num1 = -2;
    printf("resultado !%d es: %d", num1, ft_recursive_factorial(num1));
    printf("\n");
    int num2 = 0;
    printf("resultado !%d es: %d", num2, ft_recursive_factorial(num2));
    printf("\n");
    int num3 = 1;
    printf("resultado !%d es: %d", num3, ft_recursive_factorial(num3));
    printf("\n");
    int num4 = 5;
    printf("resultado !%d es: %d", num4, ft_recursive_factorial(num4));
}*/
