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
