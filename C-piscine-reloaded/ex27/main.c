/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvirva <fvirva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:04:12 by fvirva            #+#    #+#             */
/*   Updated: 2025/11/11 19:59:47 by fvirva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	read_file(int fd)
{
	char	buffer[4096];
	ssize_t	bytes_r;

	bytes_r = read(fd, buffer, sizeof(buffer));
	while (bytes_r > 0)
	{
		write(1, buffer, bytes_r);
		bytes_r = read(fd, buffer, sizeof(buffer));
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	read_file(fd);
	close(fd);
	return (0);
}
