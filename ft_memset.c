/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:05:54 by psapio            #+#    #+#             */
/*   Updated: 2023/10/24 11:04:46 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*bigc;

	bigc = b;
	i = 0;
	while (len > 0)
	{
		bigc[i] = (char)c;
		len--;
		i++;
	}
	return (bigc);
}
/*
int	main(void)
{
	size_t	size;
	int		character;
	char	pointer[20];
	
	size = 7;
	character = 'A';
	printf("%s\n", ft_memset(pointer, character, size));
}*/
