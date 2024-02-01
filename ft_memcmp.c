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
/*
La función ft_memcmp compara los primeros n bytes de dos bloques de memoria
apuntados por s1 y s2. Se realiza una comparación byte a byte entre los
bloques de memoria. La función devuelve un valor entero menor que cero si el
contenido del bloque de memoria al que apunta s1 es considerado menor que el
del bloque de memoria al que apunta s2, un valor entero mayor que cero si es
considerado mayor, y devuelve cero si ambos bloques de memoria tienen
contenido igual. Esta función es útil para comparar el contenido de dos
bloques de memoria, como en la implementación de algoritmos de
ordenamiento o búsqueda. La implementación típica de ft_memcmp implica iterar
sobre los primeros n bytes de los bloques de memoria apuntados por s1 y s2,
comparando byte a byte utilizando el operador de comparación <. La función
devuelve el resultado de la comparación como un valor entero. Es importante
tener en cuenta que la comparación se detiene tan pronto como se encuentra
un byte diferente entre los bloques de memoria, sin necesidad de
comparar los bytes restantes.
*/
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
