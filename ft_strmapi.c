/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:45:36 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:39:03 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*char	randomize_conversor(unsigned int none, char c)
{
	char	a;

	a = (int)(c + none);
	return (a);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			len;
	char			*newstring;

	len = 0;
	while (s[len] != '\0')
		len++;
	newstring = (char *)malloc(len + 1);
	if (newstring == NULL)
		return (NULL);
	newstring[len] = '\0';
	i = 0;
	while (i < len)
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	return (newstring);
}
/*
int	main(void)
{
	char	stringc [] = "hola Lucia";

	printf("%s\n",stringc);
	printf("%s\n",ft_strmapi(stringc, randomize_conversor));
	free (ft_strmapi(stringc, randomize_conversor));
	return (0);
}*/
