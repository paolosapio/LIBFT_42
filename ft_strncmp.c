/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:07:00 by psapio            #+#    #+#             */
/*   Updated: 2023/10/24 11:02:37 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (n != 0)
	{
		if (s1[a] > s2[b])
			return (1);
		if (s1[a] < s2[b])
			return (-1);
		a++;
		b++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
	char	idea_a[] = "viva la vida loca";
	char	idea_b[] = "viva la vida dulce";
	int		size;
	int		result;

	size = 15;
	result = ft_strncmp(idea_a, idea_b, size);
	printf ("La tuya: %d\n", result);
	printf ("Original: %d\n", strncmp(idea_a, idea_b, size));
	return (0);
}*/
