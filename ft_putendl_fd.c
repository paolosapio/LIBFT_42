/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:12:06 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 19:51:04 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	//char frase [] = "Viva la vida";
	//int file_d;

	//file_d = open("archivo_pc", O_RDWR);
	//ft_putendl_fd(frase, file_d);
	//close(file_d);
	
	ft_putendl_fd("Hola buenos dias", 1);
}*/
