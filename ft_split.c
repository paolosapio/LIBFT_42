/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:06:27 by psapio            #+#    #+#             */
/*   Updated: 2023/11/15 10:48:48 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
