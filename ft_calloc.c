/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:06 by psapio            #+#    #+#             */
/*   Updated: 2024/02/01 11:33:10 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_calloc asigna un bloque de memoria para un array de
count elementos, cada uno de tamaño size bytes, y lo inicializa con ceros.
El total de memoria asignada es count * size bytes. Esta función es útil para
asignar y preparar áreas de memoria antes de su uso, especialmente para arrays
dinámicos. La implementación típica de ft_calloc implica la asignación de
memoria utilizando malloc y luego la inicialización de cada byte a cero
utilizando la función ft_memset. Es importante tener en cuenta que la memoria
asignada por ft_calloc debe ser liberada utilizando free una vez que ya no se
necesite, para evitar fugas de memoria.
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	char	*pointer;

	i = 0;
	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	pointer = malloc(total_size);
	if (pointer == NULL)
		return (NULL);
	while (total_size > 0)
	{
		pointer[i] = 0;
		total_size--;
		i++;
	}
	return (pointer);
}
/*
int main(void)
{
	size_t tipo_dato;
	size_t grandezza_dato;

	tipo_dato = 100;//integer data type quantity of bytes that defines an inti
	grandezza_dato = 50;//Quantity of data
	printf("original>%s\n", calloc(tipo_dato, grandezza_dato));
	printf("mia>%s\n", ft_calloc(tipo_dato, grandezza_dato));
}*/
