/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-b <jpaulo-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:36:40 by jpaulo-b          #+#    #+#             */
/*   Updated: 2025/05/07 14:43:46 by jpaulo-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//  Write the pointer's data
int	ft_putptr(void *s)
{
	if (!s)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_puthex((unsigned long)s, 0));
}
