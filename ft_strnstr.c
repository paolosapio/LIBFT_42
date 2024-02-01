/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:22:14 by psapio            #+#    #+#             */
/*   Updated: 2024/01/31 17:24:39 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strnstr busca la primera aparición de la subcadena needle
dentro de la cadena haystack, limitando la búsqueda a los primeros len
caracteres de la cadena haystack. Si se encuentra la subcadena, la función
devuelve un puntero al inicio de la primera ocurrencia dentro de los primeros
len caracteres de haystack. Si no se encuentra la subcadena o si la longitud
de la subcadena needle es mayor que len, la función devuelve NULL.
La implementación típica de ft_strnstr implica un bucle que itera sobre
los primeros len caracteres de la cadena haystack, buscando una coincidencia
con la subcadena needle. Para cada caracter en haystack, se compara con el
primer caracter de needle, y si hay una coincidencia, se verifica si los
siguientes caracteres coinciden hasta que se complete needle o se alcance
el límite de len. Si se encuentra una coincidencia completa, se devuelve
un puntero al inicio de esa ocurrencia. Es importante tener en cuenta que
ft_strnstr es una versión segura de ft_strstr que limita la búsqueda
dentro de los primeros len caracteres de la cadena principal, lo que
evita lecturas fuera de límites y mejora la seguridad.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	needle_len;
	size_t	b;

	a = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)&haystack[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (haystack[a] == '\0')
		return (NULL);
	if (needle[b] == '\0')
		return ((char *)&haystack[a]);
	while (a < len)
	{
		if (haystack[a] == needle[b])
		{
			b++;
			if (needle[b] == '\0')
			{
				a = a - (b - 1);
				return ((char *)&haystack[a]);
			}
		}
		else
			b = 0;
		a++;
	}
	return (NULL);
}

int main(void)
{
	char	sentence[] = "viva la vida con colcores";
	char	word[] = "va";
	int		size;
	char	*result;

	size = 10;
	result = ft_strnstr(sentence, word, size);
	printf("%s\n", result);
	printf("%s\n",strnstr(sentence, word, size));
}*/
