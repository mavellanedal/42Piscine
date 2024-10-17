/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:51:31 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 10:31:26 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	else
	{
		dest[i - 1] = '\0';
	}
	return (i);
}
/*
int	main(void)
{
	char src1[] = "Hola, mundo!";
    char dest1[20];
    unsigned int size1 = 20;

    char src2[] = "Esta es una cadena larga";
    char dest2[10];
    unsigned int size2 = 10;

    char src3[] = "";
    char dest3[50];
    unsigned int size3 = 50;

    unsigned int len1 = ft_strlcpy(dest1, src1, size1);
    unsigned int len2 = ft_strlcpy(dest2, src2, size2);
    unsigned int len3 = ft_strlcpy(dest3, src3, size3);

    printf("src1: '%s', dest1: '%s', longitud copiada: %u\n", src1, dest1, len1);
    printf("src2: '%s', dest2: '%s', longitud copiada: %u\n", src2, dest2, len2);
    printf("src3: '%s', dest3: '%s', longitud copiada: %u\n", src3, dest3, len3);

    return 0;
}*/
