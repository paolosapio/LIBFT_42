/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:51:55 by psapio            #+#    #+#             */
/*   Updated: 2023/11/21 10:12:10 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size_p;
	char	*s1double;
	size_t	i;

	i = 0;
	size_p = ft_strlen(s1);
	s1double = malloc(size_p + 1);
	if (s1double == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s1double[i] = s1[i];
		i++;
	}
	s1double[i] = '\0';
	return (s1double);
}
/*
int main(void)
{
	const char puntero[] = "";
	printf("%s\n", ft_strdup(puntero));
	printf("%s\n", ft_strdup(puntero));
}*/
