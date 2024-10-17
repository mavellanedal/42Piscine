/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:55:03 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:28:14 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;	
	int	flag;

	i = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str [i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "hola, mundo!";
    char str2[] = "hola mundo. 42palabras 43otro";
    char str3[] = "ESTO ES UNA PRUEBA";
    char str4[] = "mi nombre es bond, james bond.";
    char str5[] = "";

    printf("Cadena capitalizada: '%s'\n", str1, ft_strcapitalize(str1));
    printf("Cadena capitalizada: '%s'\n", str2, ft_strcapitalize(str2));
    printf("Cadena capitalizada: '%s'\n", str3, ft_strcapitalize(str3));
    printf("Cadena capitalizada: '%s'\n", str4, ft_strcapitalize(str4));
    printf("Cadena capitalizada: '%s'\n", str5, ft_strcapitalize(str5));

    return 0;
}*/
