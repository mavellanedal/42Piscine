/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:15:27 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/17 10:05:43 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		put_char('-');
	}
	if (nb == -2147483648)
	{
		put_char('2');
		nb = 147483648;
	}
	if (nb < 10)
	{
		put_char(nb + '0');
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
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
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				repeated_char ++;
			j++;
		}
		if (repeated_char >= 2)
			return (0);
		i++;
	}
	return (i);
}

void	base_convert(long nbr, int base_typ, char *base)
{
	int	i;

	i = 0;
	if (nbr < base_typ)
		put_char(base[nbr % base_typ]);
	else
	{
		base_convert(nbr / base_typ, base_typ, base);
		base_convert(nbr % base_typ, base_typ, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_typ;
	long						
		longnbr;

	longnbr = nbr;
	i = 0;
	base_typ = check_base(base);
	if (!(base_typ))
		return ;
	if (base_typ >= 2)
	{
		if (nbr < 0)
		{
			put_char('-');
			longnbr = -longnbr;
		}
		base_convert(longnbr, base_typ, base);
	}
}

/*int	main(void)
{
    int number = 42;
    char *base_decimal = "0123456789";
    char *base_hexadecimal = "0123456789ABCDEF";
    char *base_binary = "01";
    char *base_octal = "01234567";

    ft_putnbr_base(number, base_decimal);
    printf("\n");
	ft_putnbr_base(number, base_hexadecimal);
	printf("\n");
	ft_putnbr_base(number, base_binary);
	printf("\n");
	ft_putnbr_base(number, base_octal);
    return (0);   
}*/
