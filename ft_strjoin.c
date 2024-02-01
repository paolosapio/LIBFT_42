/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:26:04 by psapio            #+#    #+#             */
/*   Updated: 2023/11/10 09:35:52 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	size_t	longstr;
	char	*string3;

	i = 0;
	longstr = ft_strlen(s1) + ft_strlen(s2);
	string3 = malloc(longstr +1);
	if (string3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		string3[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii] != '\0')
	{
		string3[i] = s2[ii];
		i++;
		ii++;
	}
	string3[i] = '\0';
	return (string3);
}
/*
int	main (void)
{
	char const	string1 [] = "viva ";
	char const	string2 [] = "la vida";

	printf("%s\n", ft_strjoin(string1, string2));
}*/
