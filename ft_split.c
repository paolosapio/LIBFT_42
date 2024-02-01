/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:06:27 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:26:41 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_split divide la cadena s en subcadenas usando el carácter delimitador c y devuelve un array de punteros a cadenas (char **). Estas subcadenas se obtienen extrayendo partes de la cadena s separadas por ocurrencias del carácter c. El array resultante contiene todas las subcadenas extraídas, seguidas de un puntero nulo para indicar el final del array. Esta función es útil para dividir una cadena en palabras o tokens, por ejemplo, para procesar entradas del usuario o archivos de texto. La implementación de ft_split típicamente involucra iterar sobre la cadena s, buscando ocurrencias del delimitador c, extrayendo subcadenas y almacenándolas en el array resultante. Se debe tener en cuenta la gestión de la memoria para asignar espacio suficiente para el array resultante y para cada subcadena. Además, la función debe manejar casos especiales, como cuando la cadena está vacía o cuando no hay ocurrencias del delimitador.
*/
size_t	counter_word(char const	*s, char c)
{
	size_t	i;
	size_t	number_words;

	i = 0;
	number_words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			number_words++;
		i++;
	}
	return (number_words);
}

void	*word_allocator(char const *s, char c, char **two_d_array)
{
	size_t	i;
	size_t	i_line;
	size_t	i_long_word;

	i_line = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i_long_word = 1;
		if (s[i] != c)
		{
			while ((s[i + i_long_word] != '\0') && (s[i + i_long_word] != c))
				i_long_word++;
			two_d_array[i_line++] = ft_substr(s, i, i_long_word);
			if (two_d_array[i_line - 1] == NULL)
			{
				while (i_line-- > 0)
					free(two_d_array[i_line]);
				free(two_d_array);
				return (NULL);
			}
		}
		i = i + i_long_word;
	}
	return (two_d_array);
}

char	**ft_split(char const *s, char c)
{
	char	**two_d_array;
	size_t	number_words;

	number_words = counter_word(s, c);
	two_d_array = (char **)malloc(sizeof(char *) * (number_words + 1));
	if (two_d_array == NULL)
		return (NULL);
	if (number_words == 0)
	{
		two_d_array[0] = NULL;
		return (two_d_array);
	}
	if (word_allocator(s, c, two_d_array) != NULL)
	{
		two_d_array[number_words] = NULL;
		return (two_d_array);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	perritos [] = "Mafio Dana y Bebe";
	char	separador = ' ';
	char	**split_devuelto;
	size_t	i;

	split_devuelto = ft_split(perritos, separador);
	i = 0;
	while (split_devuelto[i] != NULL)
	{
		printf("%s\n", split_devuelto[i]);
		i++;
	}
	return (0);
}*/
