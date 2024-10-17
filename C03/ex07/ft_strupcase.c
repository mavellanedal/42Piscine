/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:38:50 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:21:56 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
    char str1[] = "hola, mundo!";
    char str2[] = "Hola Mundo";
    char str3[] = "123";
    char str4[] = "HELLO";
    char str5[] = "";

    printf("Cadena en mayúsculas: '%s'\n", str1, ft_strupcase(str1));
    printf("Cadena en mayúsculas: '%s'\n", str2, ft_strupcase(str2));
    printf("Cadena en mayúsculas: '%s'\n", str3, ft_strupcase(str3));
    printf("Cadena en mayúsculas: '%s'\n", str4, ft_strupcase(str4));
	printf("Cadena en mayúsculas: '%s'\n", str5, ft_strupcase(str5));
}*/
