/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:57:52 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/20 19:58:00 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	used_function(va_list p, char c)
{
	int	i;

	i = 0;
	if (c == '%')
		i += ft_put_char('%');
	else if (c == 'c')
		i += ft_put_char(va_arg(p, int));
	else if (c == 'd' || c == 'i')
		i += ft_put_int(va_arg(p, int));
	else if (c == 'u')
		i += ft_put_unis_int(va_arg(p, unsigned int));
	else if (c == 'x')
		i += ft_put_x(va_arg(p, unsigned int));
	else if (c == 'X')
		i += ft_put_xmaju(va_arg(p, unsigned int));
	else if (c == 'p')
	{
		i += ft_put_str("0x");
		i += ft_put_ads(va_arg(p, unsigned long long));
	}
	else if (c == 's')
		i += ft_put_str(va_arg(p, char *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	va_start(ptr, format);
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(++format) == '\0')
				return (i);
			else
				i += used_function(ptr, *(format++));
		}
		else
			i += ft_put_char(*(format++));
	}
	va_end(ptr);
	return (i);
}
