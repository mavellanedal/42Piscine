/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:46:37 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 09:46:42 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' && str[i] > 'Z') || str[i] < 'A' || str[i] > 'z')
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
    char str2[] = "Hola Mundo 123";
    char str3[] = "";

    printf("Cadena '%s' es alfabética: %d\n", str1, ft_str_is_alpha(str1));
    printf("Cadena '%s' es alfabética: %d\n", str2, ft_str_is_alpha(str2));
    printf("Cadena '%s' es alfabética: %d\n", str3, ft_str_is_alpha(str3));

    return (0);
}*/	
