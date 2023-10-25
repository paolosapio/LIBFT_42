/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:45:44 by psapio            #+#    #+#             */
/*   Updated: 2023/10/23 16:20:01 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	conversion;

	i = 0;
	sign = 1;
	conversion = 0;
	if (nptr[0] == '+')
	{
		i++;
	}
	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] != '\0') && ((nptr[i] > '/') && (nptr[i] < ':')))
	{
		conversion = conversion * 10;
		conversion = conversion + nptr[i] - 48;
		i++;
	}
	conversion = conversion * sign;
	return (conversion);
}
/*
int	main(void)
{
	char	number[] = "-2147483648";
	int		result;

	result = ft_atoi(number);
	printf("%d\n", result);
}*/
