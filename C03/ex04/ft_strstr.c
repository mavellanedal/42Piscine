/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:42:51 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 13:23:21 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "Hello, world! This is a test string.";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
    {
        printf("Empieza en la posición: %ld\n", result - str);
    }
    else
    {
        printf("La subcadena '%s' no fue encontrada en '%s'\n", to_find, str);
    }

    return 0;
}*/
