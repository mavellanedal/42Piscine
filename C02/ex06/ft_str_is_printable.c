/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:32:44 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:16:23 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < ' ' )
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
	char str1[] = "Hola, mundo!";
    char str2[] = "Hola\tmundo";
    char str3[] = "Hola\nmundo";
    char str4[] = "";
    char str5[] = "Printable string! 123";

    printf("'%s' son printeables: %d\n", str1, ft_str_is_printable(str1));
    printf("'%s' son printeables: %d\n", str2, ft_str_is_printable(str2));
    printf("'%s' son printeables: %d\n", str3, ft_str_is_printable(str3));
    printf("'%s' son printeables: %d\n", str4, ft_str_is_printable(str4));
    printf("'%s' son printeables: %d\n", str5, ft_str_is_printable(str5));
    return 0;
}*/
