/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:29:09 by psapio            #+#    #+#             */
/*   Updated: 2023/11/08 18:40:13 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (src[a] == '\0')
	{
		dst[b] = '\0';
		return (a);
	}
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize > 1 && src[a] != '\0')
	{
		dst[b] = src[a];
		dstsize--;
		a++;
		b++;
	}
	dst[b] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}
/*
int main(void)
{
	const char	frase_original[] = "";
	char		frase_final[] = "as";
	size_t		numer_size;
	size_t		resultado;

	numer_size = 3;
	resultado = ft_strlcpy(frase_final, frase_original, numer_size);
	printf ("%zu\n", resultado);
	printf("Frase final:%s", frase_final);
	return(0);
}*/
