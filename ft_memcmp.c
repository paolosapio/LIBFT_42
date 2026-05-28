/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:09:11 by psapio            #+#    #+#             */
/*   Updated: 2023/11/08 19:08:05 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	//char *frase_a = 0;
	char frase_a [] = "hola";
	//char *frase_b = 0;
	char frase_b [] = "hola caaaaana gon ren gesnj";
	size_t grandezza;
	int result;

	grandezza = 7;
	result = ft_memcmp(frase_a, frase_b, grandezza);
	//printf("%d\n", result);
	printf("%d\n",ft_memcmp(frase_a, frase_b, grandezza));
}
*/
