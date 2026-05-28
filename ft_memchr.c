/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:05:30 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:17:14 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		character;
	const unsigned char	*sentence;

	character = c;
	sentence = s;
	i = 0;
	while (i < n)
	{	
		if (sentence[i] == character)
			return ((void *)&sentence[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	words[] = "Nothing is born from diamonds, flowers are born from dirt";
	int		character;
	size_t	size;
	char	*result;

	character = ',';
	size = 30;
	result = ft_memchr(words, character, size);
	printf("%s\n", result);
}*/
