/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_line_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 05:09:41 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 16:17:21 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

int	io_line_length(int fd)
{
	char	buffer[1024];
	int		bytes_read;
	int		line_l;

	line_l = 0;
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		line_l += bytes_read;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read < 0)
		return (-1);
	return (line_l);
}
