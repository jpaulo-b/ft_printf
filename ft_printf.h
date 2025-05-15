/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:53:46 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 15:08:36 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  header ft_printf.h
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//  malloc, free
# include <stdlib.h>

//  write
# include <unistd.h>

//  variadic functions
# include <stdarg.h>

//  tests
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_puthex(unsigned long int n, int upper);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putptr(void *s);

#endif
