/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:05:30 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:23:41 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_memchr busca la primera aparición del byte c en los primeros n bytes del bloque de memoria apuntado por s. Se realiza una búsqueda secuencial byte por byte dentro del rango especificado. Si se encuentra el byte c, la función devuelve un puntero a la posición de memoria del byte correspondiente dentro del bloque de memoria. Si el byte c no se encuentra en los primeros n bytes, la función devuelve NULL. Esta función es útil para buscar un byte específico dentro de un bloque de memoria, como en la implementación de algoritmos de búsqueda o análisis de datos binarios.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		character;
	const unsigned char	*sentence;

	character = c;
	sentence = s;
	i = 0;
	while (i < n)
	{
		if (sentence[i] == character)
			return ((void *)&sentence[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	words[]="Nothing is born from diamonds,flowers are born from dirt";
	int		character;
	size_t	size;
	char	*result;

	character = ',';
	size = 30;
	result = ft_memchr(words, character, size);
	printf("%s\n", result);
}*/
