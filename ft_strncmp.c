/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:07:00 by psapio            #+#    #+#             */
/*   Updated: 2023/11/20 16:39:48 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_strncmp compara los primeros n caracteres de las cadenas de
caracteres s1 y s2. Devuelve un valor entero menor que, igual a, o mayor
que cero si s1 es lexicográficamente menor que, igual a, o mayor que s2,
respectivamente. La comparación se detiene después de n caracteres o cuando
se encuentra un carácter nulo ('\0') en cualquiera de las cadenas.
La implementación típica de ft_strncmp implica un bucle que itera sobre los
primeros n caracteres de ambas cadenas, comparando cada par de caracteres.
La función devuelve la diferencia entre los valores ASCII de los caracteres
en caso de que difieran, o cero si los primeros n caracteres de ambas
cadenas son idénticos. Es importante tener en cuenta que la función
ft_strncmp es sensible a mayúsculas y minúsculas, lo que significa que
considera las diferencias de mayúsculas y minúsculas al comparar
los caracteres. Esta función es útil cuando se necesita comparar las
primeras n caracteres de dos cadenas de caracteres de manera segura,
sin importar la longitud total de las cadenas.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				a;
	int				b;
	unsigned char	*s1cast;
	unsigned char	*s2cast;

	s1cast = (unsigned char *)s1;
	s2cast = (unsigned char *)s2;
	a = 0;
	b = 0;
	while ((n != 0) && (s1[a] != '\0') && (s2[b] != '\0'))
	{
		if (s1cast[a] != s2cast[b])
			return (s1cast[a] - s2cast[b]);
		a++;
		b++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1cast[a] - s2cast[b]);
}
/*
int	main(void)
{
	char	idea_a[] = "\200";
	char	idea_b[] = "\0";
	int		size;
	int		result;

	size = 15;
	result = ft_strncmp(idea_a, idea_b, size);
	printf ("La tuya: %d\n", result);
	printf ("Original: %d\n", strncmp(idea_a, idea_b, size));
	return (0);
}
*/
