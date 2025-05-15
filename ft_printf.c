/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:24:06 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 15:08:21 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//  printf's simulation with format identifiers %c, s, p, d, i, u, x, X, %

static int	ft_format_id(char s, va_list args);

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			count;
	int			i;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			count = count + ft_format_id(s[++i], args);
			i++;
		}
		else
		{
			count = count + ft_putchar(s[i++]);
		}
	}
	va_end(args);
	return (count);
}

static int	ft_format_id(char s, va_list args)
{
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'i' || s == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (s == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (s == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (s == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (s == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (s == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	int	*p;
	int	a = 16;

	p = &a;
	ft_printf("c\n");
	printf("c\n");
	ft_printf("char %c\n", 'c');
	printf("char %c\n", 'c');
	ft_printf("string %s xyz\n", "seteringue");
	printf("string %s xyz\n", "seteringue");
	ft_printf("int %i\n", 123);
	printf("int %i\n", 123);
	ft_printf("base 10 %d\n", 16);
	printf("base 10 %d\n", 16);
	ft_printf("pointer %p\n", p);
	printf("pointer %p\n", p);
	ft_printf("unsigned int %u\n", 2147483647);
	printf("unsigned int %u\n", 2147483647);
	ft_printf("base 16x %x\n", 15);
	printf("base 16x %x\n", 15);
	ft_printf("base 16X %X\n", 15);
	printf("base 16X %X\n", 15);
	ft_printf("%%\n");
	printf("%%\n");
	return (0);
}*/
