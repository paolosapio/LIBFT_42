/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:26:04 by psapio            #+#    #+#             */
/*   Updated: 2023/11/10 09:35:52 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strjoin concatena las cadenas de caracteres s1 y s2 en una
nueva cadena de caracteres. La función asigna memoria suficiente para
almacenar la nueva cadena resultante, que es una combinación de las cadenas
s1 y s2, incluyendo el carácter nulo final ('\0'). La nueva cadena resultante
contiene la concatenación de s1 seguido de s2. La implementación típica de
ft_strjoin implica calcular la longitud de las cadenas s1 y s2, asignar
memoria suficiente para la nueva cadena resultante utilizando la
función malloc, y luego copiar el contenido de s1 seguido de s2 en la
nueva área de memoria utilizando la función ft_memcpy o similar.
Es importante recordar que la memoria asignada por ft_strjoin debe ser
liberada utilizando free cuando ya no se necesite para evitar fugas de memoria.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	size_t	longstr;
	char	*string3;

	i = 0;
	longstr = ft_strlen(s1) + ft_strlen(s2);
	string3 = malloc(longstr +1);
	if (string3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		string3[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii] != '\0')
	{
		string3[i] = s2[ii];
		i++;
		ii++;
	}
	string3[i] = '\0';
	return (string3);
}
/*
int	main (void)
{
	char const	string1 [] = "viva ";
	char const	string2 [] = "la vida";

	printf("%s\n", ft_strjoin(string1, string2));
}*/
