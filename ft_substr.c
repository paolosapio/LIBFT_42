/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:44:51 by psapio            #+#    #+#             */
/*   Updated: 2023/11/12 16:56:01 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
/*
La función ft_substr toma como entrada una cadena de caracteres s,
un índice start que indica el inicio de la subcadena y una longitud len que
especifica la cantidad máxima de caracteres a extraer. La función devuelve
una nueva cadena que contiene la subcadena extraída de s. La implementación
típica de ft_substr implica la asignación de memoria para la nueva subcadena
y luego la copia de los caracteres apropiados desde la posición start hasta
start + len - 1. Si start es mayor que la longitud de la cadena s, o si len
es cero, la función devuelve una nueva cadena vacía. Si start + len excede
la longitud de s, la función copia todos los caracteres disponibles hasta
el final de la cadena s. Es importante destacar que ft_substr proporciona
una forma conveniente de extraer una parte específica de una cadena de
caracteres, lo que es útil en situaciones donde se necesitan fragmentos
de cadenas para su posterior procesamiento.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	substring_length;
	size_t	i;
	size_t	input_length;
	char	*substring;

	if (s == NULL)
		return (NULL);
	input_length = ft_strlen(s);
	if (start >= input_length)
		return (ft_calloc(1, sizeof(char)));
	if (input_length - start < len)
		substring_length = input_length - start;
	else
		substring_length = len;
	substring = (char *)malloc(substring_length + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < substring_length)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int main(void)
{
	char frase[] = "casa";
	int start = 1;
	int lughezza = 12;

	printf("%s\n", ft_substr(frase, start, lughezza));
}*/
