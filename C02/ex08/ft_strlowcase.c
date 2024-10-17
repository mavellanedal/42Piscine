/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:43:58 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/09 16:53:02 by mavellan         ###   ########.fr       */
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

/*int	main(void)
{
    char str1[] = "HELLO WORLD";
    char str2[] = "C PROGRAMMING";
    char str3[] = "123 ABC def";
    char str4[] = ""; // Cadena vacía

    printf("Original: %s -> Lowercase: %s\n", str1, ft_strlowcase(str1));
    printf("Original: %s -> Lowercase: %s\n", str2, ft_strlowcase(str2));
    printf("Original: %s -> Lowercase: %s\n", str3, ft_strlowcase(str3));
    printf("Original: %s -> Lowercase: %s\n", str4, ft_strlowcase(str4));

    return 0;
}*/
