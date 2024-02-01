/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:21:33 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 20:19:33 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
void	upper(unsigned int iterador, char *frase)
{
	frase[iterador] = ft_toupper(frase[iterador]);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char arrayc [] = "viva la vida";
	ft_striteri(arrayc, upper);
	//printf("%s\n", arrayc);
	printf("b\n");
}*/
