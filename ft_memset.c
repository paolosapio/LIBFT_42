/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:05:54 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 17:40:05 by psapio           ###   ########.fr       */
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
	int 	pointer[20];
	int		intero;

	intero = 257;
	size = 7;
	character = 'A';




	printf("%p\n", ft_memset(&intero, 0, 1));
	printf("%d\n", intero);


//	printf("%s\n", ft_memset(pointer, character, size));
//	printf("%s\n", memset(pointer + 1, 190, 3));
//	printf("%s\n", ft_memset(pointer, character, 0));
//	printf("%s\n", ft_memset(pointer, '\0', size));
//	printf("%s\n", ft_memset(pointer, '7', size));
//	//printf("%s\n", memset(NULL, character, size));
	}*/
