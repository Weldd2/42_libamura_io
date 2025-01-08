/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:46:03 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 16:17:07 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H
# include <stdio.h>
# include <fcntl.h>
# include "str.h"

void	io_putchar_fd(char c, int fd);
void	io_putstr_fd(char *s, int fd);
void	io_putendl_fd(char *s, int fd);
void	io_putnbr_fd(int n, int fd);
int		io_count_line(int fd);
int		io_line_length(int fd);

#endif
