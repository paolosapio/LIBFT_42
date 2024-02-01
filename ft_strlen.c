/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:05:45 by psapio            #+#    #+#             */
/*   Updated: 2023/10/20 10:01:25 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strlen recorre la cadena de caracteres s hasta encontrar el
carácter nulo ('\0') de terminación. Durante este recorrido, cuenta la
cantidad de caracteres que encuentra y devuelve ese valor como resultado,
que representa la longitud de la cadena. La implementación típica de
ft_strlen implica un bucle que itera sobre los caracteres de la cadena s,
incrementando un contador hasta que encuentra el carácter nulo de terminación.
Una vez que encuentra el carácter nulo, devuelve el valor del contador
como la longitud total de la cadena. Es importante destacar que ft_strlen
es una función eficiente que puede ser utilizada para determinar la longitud
de una cadena de caracteres en cualquier contexto donde se necesite
esta información.
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	int result;
	const char string[]="Paolo";
	result = ft_strlen(string);
	printf("%zu\n",ft_strlen(string));
	printf("%zu\n",ft_strlen("CASA ··"));
	printf("%zu\n",ft_strlen("0"));
	printf("%zu\n",ft_strlen(""));
	return (0);
}*/
