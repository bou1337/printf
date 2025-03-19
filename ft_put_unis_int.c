/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unis_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:43:21 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/20 21:45:53 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_unis_int(unsigned int n)
{
	int		i;
	char	digit[11];
	int		c;

	i = 0;
	c = 0;
	if (n == 0)
		return (ft_put_char('0'));
	while (n > 0)
	{
		digit[i++] = n % 10 + '0';
		n = n / 10;
	}
	while (--i >= 0)
	{
		c += ft_put_char(digit[i]);
	}
	return (c);
}
