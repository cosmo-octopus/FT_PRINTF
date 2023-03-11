/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:17:16 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/27 16:35:00 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_input_parser(const char *str, va_list args)
{
	int	i;
	int	cntr;

	i = -1;
	cntr = 0;
	while (*(str + ++i))
	{
		if (*(str + i) != '%')
			cntr += ft_putchar_fd(*(str + i), 1);
		else if (*(str + i) == '%' && *(str + i + 1) == '\0')
			break ;
		else if (*(str + i) == '%' && *(str + i + 1))
		{
			if (ft_is_argument(*(str + ++i)))
				cntr += ft_formats(*(str + i), args);
		}
		else
			cntr += ft_putchar_fd(*(str + i), 1);
	}
	return (cntr);
}
