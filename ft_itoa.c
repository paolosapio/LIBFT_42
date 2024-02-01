/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:06:14 by psapio            #+#    #+#             */
/*   Updated: 2023/11/15 21:26:47 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char		*array;
	size_t		counter;
	long int	n_twin;

	n_twin = (long int)n;
	counter = 0;
	if ((long int)n <= 0)
		counter++;
	while ((n_twin != 0) && (counter++ >= 0))
		n_twin = n_twin / 10;
	array = ft_calloc(counter + 1, sizeof(char));
	if (array == NULL)
		return (NULL);
	n_twin = (long int)n;
	if ((long int)n < 0)
		(n_twin = (long int)n * -1);
	while (counter-- != 0)
	{
		array[counter] = n_twin % 10 + '0';
		n_twin = n_twin / 10;
	}
	if ((long int)n < 0)
		array[0] = '-';
	return (array);
}
/*
int	main(void)
{
    char *res = ft_itoa(-2147483648);
    printf("%s",res);
    free(res);
}*/
