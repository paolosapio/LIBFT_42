/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:09:11 by psapio            #+#    #+#             */
/*   Updated: 2023/10/25 14:20:52 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	i = 0;

	while(i + 1 < n)
	{
// 		printf("%", s1[i]);
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			break;
		i++;
	}
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}

#include <string.h>
int main(void)
{
	char *frase_a = 0;//frase_a [] = "";
	char *frase_b = 0;//frase_b [] = //"";
	size_t grandezza;
	int result;

	grandezza = 0;
	result = ft_memcmp(frase_a, frase_b, grandezza);
	printf("%d\n", result);
	printf("%d\n",memcmp(frase_a, frase_b, grandezza));
}
/*
//segunda solucion, mas elegante gracias a borja
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	i = 0;

	while(i < n)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
		{
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		}
		i++;
	}
		return (0);
}

#include <string.h>
int main(void)
{
	char frase_a [] = "1234568";
	char frase_b [] = "1234567";
	size_t grandezza;
	int result;

	grandezza = 0;
	result = ft_memcmp(frase_a, frase_b, grandezza);
	printf("%d\n", result);
	printf("%d\n",memcmp(frase_a, frase_b, grandezza));
}*/
