/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:44:51 by psapio            #+#    #+#             */
/*   Updated: 2023/11/12 16:56:01 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	substring_length;
	size_t	i;
	size_t	input_length;
	char	*substring;

	if (s == NULL)
		return (NULL);
	input_length = ft_strlen(s);
	if (start >= input_length)
		return (ft_calloc(1, sizeof(char)));
	if (input_length - start < len)
		substring_length = input_length - start;
	else
		substring_length = len;
	substring = (char *)malloc(substring_length + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < substring_length)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int main(void)
{
	char frase[] = "casa";
	int start = 1;
	int lughezza = 12;

	printf("%s\n", ft_substr(frase, start, lughezza));
}*/
