/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:27:27 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:52:20 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*finalpointer;
	size_t	total_size_s1;

	if ((set == NULL) || (s1 == NULL))
		return (NULL);
	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != NULL))
	{
		i++;
	}
	total_size_s1 = ft_strlen(s1);
	j = total_size_s1;
	while ((j != 0) && (ft_strchr(set, s1[j]) != NULL))
	{
		j--;
	}
	finalpointer = ft_substr(s1, i, j - i +1);
	return (finalpointer);
}
/*
int	main(void)
{
	char const	string1 [] = "cacacaviva la vida";
	char const	checkstr [] = "ca";

	printf("%s\n", ft_strtrim(string1, checkstr));
}*/
