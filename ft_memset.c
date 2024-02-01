/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:05:54 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 17:40:05 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
La función ft_memset llena los primeros n bytes de la región de memoria
apuntada por s con el valor especificado c. Esto es útil para inicializar
o llenar un bloque de memoria con un valor específico. El valor c se
interpreta como un byte sin signo y es repetido para llenar los n bytes
consecutivos de la memoria apuntada por s.
La implementación típica de ft_memset involucra un bucle que itera sobre los n
primeros bytes de la región de memoria apuntada por s, asignando el valor c a
cada byte individualmente. Esto garantiza que se llenen todos los bytes
requeridos con el valor especificado.
Es importante tener en cuenta que ft_memset es una función básica y útil para
inicializar memoria con un valor específico, pero no debe confundirse con
ft_bzero, que establece los bytes de memoria en cero. Mientras que ft_memset
llena la memoria con un byte específico, ft_bzero establece
los bytes de memoria en cero.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*bigc;

	bigc = b;
	i = 0;
	while (len > 0)
	{
		bigc[i] = (char)c;
		len--;
		i++;
	}
	return (bigc);
}
/*
int	main(void)
{
	size_t	size;
	int		character;
	int 	pointer[20];
	int		intero;

	intero = 257;
	size = 7;
	character = 'A';




	printf("%p\n", ft_memset(&intero, 0, 1));
	printf("%d\n", intero);


//	printf("%s\n", ft_memset(pointer, character, size));
//	printf("%s\n", memset(pointer + 1, 190, 3));
//	printf("%s\n", ft_memset(pointer, character, 0));
//	printf("%s\n", ft_memset(pointer, '\0', size));
//	printf("%s\n", ft_memset(pointer, '7', size));
//	//printf("%s\n", memset(NULL, character, size));
	}*/
