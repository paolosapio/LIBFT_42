/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:05:45 by psapio            #+#    #+#             */
/*   Updated: 2023/10/20 10:01:25 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	int result;
	const char string[]="Paolo";
	result = ft_strlen(string);
	printf("%zu\n",ft_strlen(string));
	printf("%zu\n",ft_strlen("CASA ··"));
	printf("%zu\n",ft_strlen("0"));
	printf("%zu\n",ft_strlen(""));
	return (0);
}*/
