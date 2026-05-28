/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:22:14 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:40:57 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	needle_len;
	size_t	b;

	a = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < len)
		{
			if (needle[b + 1] == '\0')
			{
				return ((char *)&haystack[a]);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (haystack[a] == '\0')
		return (NULL);
	if (needle[b] == '\0')
		return ((char *)&haystack[a]);
	while (a < len)
	{
		if (haystack[a] == needle[b])
		{
			b++;
			if (needle[b] == '\0')
			{
				a = a - (b - 1);
				return ((char *)&haystack[a]);
			}
		}
		else
			b = 0;
		a++;
	}
	return (NULL);
}

int main(void)
{
	char	sentence[] = "viva la vida con colcores";
	char	word[] = "va";
	int		size;
	char	*result;

	size = 10;
	result = ft_strnstr(sentence, word, size);
	printf("%s\n", result);
	printf("%s\n",strnstr(sentence, word, size));
}*/
