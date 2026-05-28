/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:34:33 by psapio            #+#    #+#             */
/*   Updated: 2023/11/18 19:53:12 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int main(void)
{
    //char frase [] = "Viva la vida";
    //int file_d;

    //file_d = open("archivo_pc", O_RDWR);
    //ft_putendl_fd(frase, file_d);
    //close(file_d);

    ft_putendl_fd("Hola buenos dias", 1);
}*/
