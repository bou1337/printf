/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:58:48 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/20 00:04:56 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_xmaju(unsigned int n)
{
	char	hex_[9];
	int		i;
	int		c;
	char	*hex;

	hex = "0123456789ABCDEFGH";
	i = 0;
	c = 0;
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
