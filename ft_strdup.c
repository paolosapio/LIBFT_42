/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:51:55 by psapio            #+#    #+#             */
/*   Updated: 2023/11/21 10:12:10 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strdup crea una copia duplicada de la cadena de caracteres s
en una nueva área de memoria asignada dinámicamente. La cadena de caracteres
s debe ser una cadena de caracteres terminada por un carácter nulo ('\0').
La función asigna memoria suficiente para almacenar la nueva cadena, incluyendo
el carácter nulo final, y luego copia el contenido de la cadena s en esta
nueva área de memoria. La implementación típica de ft_strdup implica calcular
la longitud de la cadena s utilizando la función ft_strlen, asignar memoria
suficiente utilizando la función malloc y luego copiar el contenido de la
cadena s en la nueva área de memoria utilizando la función ft_memcpy o similar.
Es importante recordar que la memoria asignada por ft_strdup debe ser liberada
utilizando free cuando ya no se necesite para evitar fugas de memoria.
*/
char	*ft_strdup(const char *s1)
{
	size_t	size_p;
	char	*s1double;
	size_t	i;

	i = 0;
	size_p = ft_strlen(s1);
	s1double = malloc(size_p + 1);
	if (s1double == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s1double[i] = s1[i];
		i++;
	}
	s1double[i] = '\0';
	return (s1double);
}
/*
int main(void)
{
	const char puntero[] = "";
	printf("%s\n", ft_strdup(puntero));
	printf("%s\n", ft_strdup(puntero));
}*/
