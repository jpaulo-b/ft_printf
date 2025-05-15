/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:28:40 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 16:06:26 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//  Write hexadecimal numbers
int	ft_puthex(unsigned long int n, int upper)
{
	int		i;
	char	*base;

	i = 0;
	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
		i = i + ft_puthex((n / 16), upper);
	i = i + ft_putchar(base[n % 16]);
	return (i);
}
