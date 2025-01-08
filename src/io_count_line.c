/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_count_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 05:09:41 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 16:17:29 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

int	io_count_line(int fd)
{
	char	buffer[1024];
	int		bytes_read;
	int		line_count = 0;
	int		i;

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			if (buffer[i] == '\n')
				line_count++;
			i++;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read < 0)
		return (-1);
	return (line_count);
}
