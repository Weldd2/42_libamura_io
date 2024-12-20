/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:47:31 by amura             #+#    #+#             */
/*   Updated: 2024/12/18 23:57:50 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	io_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
