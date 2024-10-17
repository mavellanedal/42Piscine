/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:04:24 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:35:40 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	generate_hex(char *str)
{
	char	digit;
	int		hex;

	hex = *(str) / 16;
	digit = '0' + hex;
	write(1, &digit, 1);
	if ((*(str) % 16) == 0 || (*(str) % 16) < 10)
	{
		hex = *(str) % 16;
		digit = 58 + (hex - 10);
	}
	else
	{
		hex = *(str) % 16;
		digit = 'a' + (hex - 10);
	}
	write(1, &digit, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	c = 92;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= '\0' && *(str + i) < 32)
		{
			write(1, &c, 1);
			generate_hex(str + i);
		}
		else
			write (1, (str + i), 1);
		i++;
	}
}
/*
int	main(void)
{
	char str1[] = "Hola, mundo!\n";
    char str2[] = "\ttexto con caracteres no imprimibles: \x01\x1F\x7F\n";
    char str3[] = "";

    printf("Cadena original: \"%s\"\n", str1);
    printf("Cadena no imprimible:\n");
    ft_putstr_non_printable(str1);

    printf("\n\n");

    printf("Cadena original: \"%s\"\n", str2);
    printf("Cadena no imprimible:\n");
    ft_putstr_non_printable(str2);

    printf("\n\n");

    printf("Cadena original: \"%s\"\n", str3);
    printf("Cadena no imprimible:\n");
    ft_putstr_non_printable(str3);

    return 0;
}*/
