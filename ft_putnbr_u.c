/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:24:33 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 15:08:32 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//  Outputs the integer 'n' unsigned

int	ft_putnbr_u(unsigned int n)
{
	int		counter;

	counter = 1;
	if (n > 9)
		counter += ft_putnbr_u(n / 10);
	ft_putchar((n % 10) + 48);
	return (counter);
}
