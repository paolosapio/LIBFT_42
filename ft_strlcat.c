/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:46:44 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:36:40 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strlcat concatena la cadena de origen src a la cadena de
destino dst, asegurando que el resultado no exceda un tamaño máximo
especificado. El parámetro size indica el tamaño total disponible para la
cadena de destino, incluyendo el espacio para el carácter nulo final ('\0').
La función devuelve el tamaño total que tendría la cadena de destino si no se
aplicara ninguna restricción de tamaño. La implementación típica de
ft_strlcat implica encontrar la longitud actual de la cadena de destino
dst y luego concatenar la cadena de origen src a dst, teniendo en cuenta
el tamaño máximo especificado por size. La función asegura que el resultado
final esté correctamente terminado con el carácter nulo final y que no exceda
el tamaño máximo especificado. Si la longitud de dst más la longitud de src
es mayor o igual que size, se truncará src para que quepa dentro del tamaño
máximo. Es importante destacar que ft_strlcat es una función segura que evita
desbordamientos de búfer y garantiza que la cadena resultante esté
correctamente terminada. Esta función es muy útil en situaciones donde
se necesita concatenar cadenas con un límite de tamaño máximo.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	size_dst_origin;

	size_dst = ft_strlen(dst);
	size_dst_origin = ft_strlen(dst);
	size_src = 0;
	if (dstsize <= size_dst_origin)
		return (ft_strlen(src) + dstsize);
	while (size_dst_origin < dstsize - 1 && src[size_src] != '\0')
	{
		dst[size_dst_origin] = src[size_src];
		size_dst_origin++;
		size_src++;
	}
	dst[size_dst_origin] = '\0';
	return (ft_strlen(src) + size_dst);
}
/*
int main(void)
{
	char		frase_d[15] = "destino ";
	const char	frase_s[] = "a copiar";
	char		frase_d2[15] = "destino ";
	const char	frase_s2[] = "a copiar";
	
	size_t		buffer;

	buffer = 0;
	printf("\nmia:\n%lu\n", ft_strlcat(frase_d, frase_s, buffer));
	printf("%s\n\n", frase_d);
	printf("original:\n%lu\n", strlcat(frase_d2, frase_s2, buffer));
	printf("%s\n", frase_d2);
	return (0);
}*/
