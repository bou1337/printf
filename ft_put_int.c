/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:20:10 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/20 21:50:56 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_int(int nb)
{
	long	n;
	int		len;
	char	digits[12];
	int		i;

	i = 0;
	len = 0;
	n = nb;
	if (n == 0)
		return (write(1, "0", 1));
	if (nb < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		digits[i++] = n % 10 + '0';
		n /= 10;
	}
	while (--i >= 0)
		len += write(1, &digits[i], 1);
	return (len);
}
