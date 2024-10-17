/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:39:33 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:04:23 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char str1[] = "HOLA";
    char str2[] = "Hola";
    char str3[] = "123";
    char str4[] = "HOLA123";
    char str5[] = "";

    printf("'%s' es solo mayúsculas: %d\n", str1, ft_str_is_uppercase(str1));
    printf("'%s' es solo mayúsculas: %d\n", str2, ft_str_is_uppercase(str2));
	printf("'%s' es solo mayúsculas: %d\n", str3, ft_str_is_uppercase(str3));
    printf("'%s' es solo mayúsculas: %d\n", str4, ft_str_is_uppercase(str4));
    printf("'%s' es solo mayúsculas: %d\n", str5, ft_str_is_uppercase(str5));

    return 0;
}*/	
