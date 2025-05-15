/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:08:03 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 15:11:31 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//  Outputs the integer 'n'

int	ft_putnbr(int n)
{
	int		counter;

	if (n == -2147483648)
	{
		counter = 11;
		write(1, "-2147483648", counter);
		return (counter);
	}
	counter = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		counter++;
	}
	if (n > 9)
		counter += ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (counter);
}
