/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:20:30 by psapio            #+#    #+#             */
/*   Updated: 2023/11/03 11:15:23 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_memmove copia n bytes de datos desde la dirección de memoria
apuntada por src a la dirección de memoria apuntada por dst. A diferencia de
ft_memcpy, ft_memmove maneja correctamente la copia de datos incluso si las
áreas de memoria a las que apuntan src y dst se superponen.
La implementación típica de ft_memmove es más compleja que la de ft_memcpy
debido a la necesidad de manejar la superposición de las áreas de memoria.
Se puede implementar utilizando un enfoque que copia los datos de manera
temporal a un área de memoria auxiliar y luego los copia de esa área a la
dirección de destino dst. Esto garantiza que los datos se copien correctamente
incluso si se superponen. Es importante destacar que, si las áreas de memoria
no se superponen, ft_memmove puede ser menos eficiente que ft_memcpy, ya que
implica copiar los datos dos veces. Sin embargo, es crucial en situaciones
donde la superposición de las áreas de memoria es posible y se necesita
una copia segura de los datos.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	if (s > d)
	{
		while (len > 0)
		{
			d[i] = s[i];
			i++;
			len--;
		}
	}
	if (s < d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char		sentence[] = "viva la Vida";
	size_t		limit;
	void		*result;

	limit = 5;
	result = ft_memmove(sentence, sentence, limit);
	printf("%s\n", result);
	printf("%s\n", sentence);
}*/
