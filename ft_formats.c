/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:22:08 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/14 20:30:41 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_formats(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_char_format(va_arg(args, int));
	else if (c == 's')
		i = ft_string_format(va_arg(args, char *));
	else if (c == 'p')
		i = ft_void_pointer_format(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		i = ft_decimal_format(va_arg(args, int));
	else if (c == 'u')
		i = ft_unsigned_decimal_format(va_arg(args, unsigned long));
	else if (c == 'x')
		i = ft_hex_format(va_arg(args, unsigned long));
	else if (c == 'X')
		i = ft_uppercase_hex_format(va_arg(args, unsigned long));
	else if (c == '%')
		i = ft_percent_format(c);
	return (i);
}
