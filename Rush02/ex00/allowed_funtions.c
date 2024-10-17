/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_funtions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:28:00 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/21 12:44:08 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, int n) 
{
	int	i;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    
	i = 0;
	while (i < n)
	{ 
        d[i] = s[i];
		i++;
	}
    return (dest);
}

int	ft_strlen(const char *msg)
{
	int	i;

	i = 0;
	while (msg[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_strcmp(const char *s1, const char *s2) 
{
    int i; 
	
	i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') 
	{
       if (s1[i] != s2[i]) 
		{
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strdup(const char *str)
{
	int	len;
	char *dup;

	len = ft_strlen(str) + 1;
	dup = malloc(len);
	if (dup)
		ft_memcpy(dup, str, len);
	return (dup);
}

char	ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return (char *)str;
		}
		str++;
	}
	if (c == '\0')
		return (char *)str;
	return NULL;
}
