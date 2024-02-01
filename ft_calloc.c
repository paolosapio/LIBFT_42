/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:06 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:02:24 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
