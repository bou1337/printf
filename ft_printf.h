/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:53:32 by iait-bou          #+#    #+#             */
/*   Updated: 2024/02/21 14:53:35 by iait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_put_char(char c);
int	ft_put_int(int i);
int	ft_put_str(char *str);
int	ft_put_x(unsigned int n);
int	ft_put_xmaju(unsigned int n);
int	ft_put_ads(unsigned long long n);
int	ft_put_unis_int(unsigned int n);
int	ft_printf(const char *format, ...);

#endif
