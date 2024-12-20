/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:46:03 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/18 23:58:45 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H
# include <stdio.h>
# include "str.h"

void	io_putchar_fd(char c, int fd);
void	io_putstr_fd(char *s, int fd);
void	io_putendl_fd(char *s, int fd);
void	io_putnbr_fd(int n, int fd);

#endif