/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:47:31 by amura             #+#    #+#             */
/*   Updated: 2024/12/18 23:57:47 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	io_putendl_fd(char *s, int fd)
{
	write(fd, s, str_strlen(s));
	write(fd, "\n", 1);
}