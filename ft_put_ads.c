/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ads.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:05:43 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/20 15:06:08 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ads(unsigned long long n)
{
	int		c;
	char	*hex;
	char	hex_[17];
	int		i;

	i = 0;
	c = 0;
	hex = "0123456789abcdef";
	if (n == 0)
		return (ft_put_char('0'));
	while (n > 0)
	{
		hex_[i++] = hex[n % 16];
		n /= 16;
	}
	while (--i >= 0)
	{
		c += ft_put_char(hex_[i]);
	}
	return (c);
}
