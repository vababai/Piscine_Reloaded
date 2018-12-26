/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:51:26 by kjacks            #+#    #+#             */
/*   Updated: 2018/11/23 21:53:38 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buff;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &buff, 1) != 0)
		ft_putchar(buff);
	close(fd);
	return (0);
}
