/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:09:41 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:29:25 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strchr busca la primera aparición del carácter c en la cadena s y devuelve un puntero a la posición de memoria del primer carácter encontrado dentro de la cadena. Si el carácter c no está presente en la cadena s, la función devuelve NULL. Esta función es útil para buscar la presencia de un carácter específico dentro de una cadena, como en la implementación de algoritmos de búsqueda o análisis de cadenas de texto. La implementación típica de ft_strchr implica iterar sobre la cadena s hasta encontrar la primera ocurrencia del carácter c. Una vez encontrado, la función devuelve un puntero a esa posición de memoria. Si se recorre toda la cadena sin encontrar el carácter c, la función devuelve NULL. Es importante tener en cuenta que esta función no busca más allá del carácter nulo terminador '\0' en la cadena s.
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;

	character = (char)c;
	i = 0;
	if (character == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return ((char *)&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*string;
	int	charvalaue;

	string = "life is beautiful";
	charvalaue = '\0';
	printf("%p\n", ft_strchr(string, charvalaue));
	printf("%p\n", strchr(string, charvalaue));
}*/
