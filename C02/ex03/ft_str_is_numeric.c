/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:15:04 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 09:49:40 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			j++;
		}
		i++;
	}
	if (j != 0)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	char str1[] = "HolaMundo";
    char str2[] = "123456789";
    char str3[] = "Hola Mundo 234";

    printf("Cadena '%s' es numerica: %d\n", str1, ft_str_is_numeric(str1));
    printf("Cadena '%s' es numerica: %d\n", str2, ft_str_is_numeric(str2));
    printf("Cadena '%s' es numerica: %d\n", str3, ft_str_is_numeric(str3));

    return (0);
}*/
