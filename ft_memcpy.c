/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:15:44 by psapio            #+#    #+#             */
/*   Updated: 2023/11/21 10:07:11 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*search;
	unsigned char	*dest;
	size_t			i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	search = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = search[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
		unsigned char *serc = NULL;
		unsigned char destino []= "casa";
		size_t size;
		unsigned char *result;

		size = 7;
		result = ft_memcpy(destino, serc, size);
		//printf("%s\n", result);
		printf("%s\n", memcpy(destino, serc, size));
}
*/
