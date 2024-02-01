/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:27:27 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:52:20 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strtrim elimina los caracteres de espacio en blanco al principio
y al final de la cadena s, incluyendo espacios, tabulaciones y saltos de línea.
La función devuelve una nueva cadena de caracteres que contiene el resultado
de eliminar los caracteres de espacio en blanco al principio y al final de s.
La implementación típica de ft_strtrim implica un proceso de dos pasos.
En primer lugar, se identifican los caracteres de espacio en blanco al
principio de la cadena s mediante un bucle que avanza desde el inicio de la
cadena hasta encontrar el primer caracter que no sea un espacio en blanco.
Luego, se identifican los caracteres de espacio en blanco al final de la
cadena s mediante un bucle que retrocede desde el final de la cadena hasta
encontrar el primer caracter que no sea un espacio en blanco. Finalmente,
se crea una nueva cadena de caracteres que contiene los caracteres no
espaciales entre estos límites. Es importante tener en cuenta que
ft_strtrim proporciona una forma conveniente de eliminar los caracteres
de espacio en blanco al principio y al final de una cadena de caracteres,
lo que es útil para procesar y manipular cadenas de manera eficiente.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*finalpointer;
	size_t	total_size_s1;

	if ((set == NULL) || (s1 == NULL))
		return (NULL);
	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != NULL))
	{
		i++;
	}
	total_size_s1 = ft_strlen(s1);
	j = total_size_s1;
	while ((j != 0) && (ft_strchr(set, s1[j]) != NULL))
	{
		j--;
	}
	finalpointer = ft_substr(s1, i, j - i +1);
	return (finalpointer);
}
/*
int	main(void)
{
	char const	string1 [] = "cacacaviva la vida";
	char const	checkstr [] = "ca";

	printf("%s\n", ft_strtrim(string1, checkstr));
}*/
