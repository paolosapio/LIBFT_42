/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:29:09 by psapio            #+#    #+#             */
/*   Updated: 2024/01/31 17:00:53 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strlcpy copia la cadena de origen src en la cadena de
destino dst, asegurando que el resultado no exceda un tamaño máximo
especificado. El parámetro size indica el tamaño total disponible para
la cadena de destino, incluyendo el espacio para el carácter
nulo final ('\0'). La función devuelve el tamaño total que tendría la cadena
de origen si no se aplicara ninguna restricción de tamaño. La implementación
típica de ft_strlcpy implica copiar la cadena de origen src a la cadena de
destino dst, teniendo en cuenta el tamaño máximo especificado por size.
La función asegura que el resultado final esté correctamente terminado
con el carácter nulo final y que no exceda el tamaño máximo especificado.
Si la longitud de src es mayor o igual que size, se truncará src para que
quepa dentro del tamaño máximo. Es importante destacar que ft_strlcpy
es una función segura que evita desbordamientos de búfer y garantiza
que la cadena resultante esté correctamente terminada. Esta función
es muy útil en situaciones donde se necesita copiar cadenas con un
límite de tamaño máximo.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (src[a] == '\0')
	{
		dst[b] = '\0';
		return (ft_strlen(src));
	}
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize > 1 && src[a] != '\0')
	{
		dst[b] = src[a];
		dstsize--;
		a++;
		b++;
	}
	dst[b] = '\0';
	while (src[a] != '\0')
		a++;
	return (ft_strlen(src));
}
/*
int main(void)
{
	const char	frase_original[] = "";
	char		frase_final[] = "as";
	size_t		numer_size;
	size_t		resultado;

	numer_size = 3;
	resultado = ft_strlcpy(frase_final, frase_original, numer_size);
	printf ("%zu\n", resultado);
	printf("Frase final:%s", frase_final);
	return(0);
}*/
