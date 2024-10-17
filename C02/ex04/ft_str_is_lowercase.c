/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:27:57 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 09:54:54 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
    char str1[] = "hola";
    char str2[] = "Hola";
    char str3[] = "123";
    char str4[] = "hola123";
    char str5[] = "";

    printf("'%s' es solo minúsculas: %d\n", str1, ft_str_is_lowercase(str1));
    printf("'%s' es solo minúsculas: %d\n", str2, ft_str_is_lowercase(str2));
    printf("'%s' es solo minúsculas: %d\n", str3, ft_str_is_lowercase(str3));
    printf("'%s' es solo minúsculas: %d\n", str4, ft_str_is_lowercase(str4));
    printf("'%s' es solo minúsculas: %d\n", str5, ft_str_is_lowercase(str5));
	return (0);;
}*/
