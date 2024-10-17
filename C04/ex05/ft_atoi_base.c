/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:32:17 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/17 13:03:22 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
//#include <stdio.h>

bool	is_in_base(char c, char *base)
{
	while (*base != '\0')
	{
		if (c == *base)
			return (true);
		base++;
	}
	return (false);
}

int	get_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	repeated_char;

	i = 0;
	j = 1;
	repeated_char = 0;
	if (base[i] == '\0' || base[i++] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	convert_to_int(char *str, char *base, int base_size)
{
	int	index;
	int	result;

	result = 0;
	while (*str && is_in_base(*str, base))
	{
		index = get_index_in_base(*str, base);
		if (index == -1)
			return (0);
		result = result * base_size + index;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	sign;
	int	result;
	int	i;

	base_size = check_base(base);
	sign = 1;
	i = 0;
	if (base_size < 2)
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = convert_to_int(&str[i], base, base_size);
	return (result * sign);
}
/*int main() 
{
    char str1[] = "   -1A3";
    char base1[] = "0123456789ABCDEF";
    int result1 = ft_atoi_base(str1, base1);
    printf("String: %s, Base: %s, Result: %d\n", str1, base1, result1);

    char str2[] = "101010";
    char base2[] = "01";
    int result2 = ft_atoi_base(str2, base2);
    printf("String: %s, Base: %s, Result: %d\n", str2, base2, result2);

    char str3[] = "   7E3";
    char base3[] = "0123456789ABCDEF";
    int result3 = ft_atoi_base(str3, base3);
    printf("String: %s, Base: %s, Result: %d\n", str3, base3, result3);

    char str4[] = "ZZZ";
    char base4[] = "Z";
    int result4 = ft_atoi_base(str4, base4);
    printf("String: %s, Base: %s, Result: %d\n", str4, base4, result4);

    char str5[] = "123";
    char base5[] = "";
    int result5 = ft_atoi_base(str5, base5);
    printf("String: %s, Base: %s, Result: %d\n", str5, base5, result5);

    return 0;
}*/
