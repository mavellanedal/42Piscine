/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:42:29 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/12 13:31:55 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	total_len;

	i = 0;
	j = 0;
	dest_len = 0;
	while ((dest[j] != '\0') && (j < size))
	{
		dest_len++;
		j++;
	}
	while ((src[i] != '\0') && (j + 1 < size))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	total_len = dest_len + i;
	return (total_len);
}

/*int	main(void)
{
	char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;

    printf("Cadena antes de concatenar: %s\n", dest);
    unsigned int result_len = ft_strlcat(dest, src, size);
    printf("Cadena después de concatenar: %s\n", dest);
    printf("Longitud total de la cadena resultante: %u\n", result_len);

    return 0;
}*/
