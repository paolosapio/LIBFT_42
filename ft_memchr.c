/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:05:30 by psapio            #+#    #+#             */
/*   Updated: 2023/10/24 15:44:18 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((unsigned char*)c)[i] != 0)
	{
		return ((unsigned char *c)[i] == c);
		i++;
	}
}

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
}
