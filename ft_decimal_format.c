/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:22:41 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/07 16:36:38 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_format(int value)
{
	int		i;
	char	*str;

	i = 0;
	if (value == -2147483648)
	{
		return (i = ft_string_format("-2147483648"));
	}
	if (value < 0)
	{
		i += ft_string_format("-");
		value *= -1;
	}
	str = ft_itoa(value);
	i += ft_string_format(str);
	free (str);
	return (i);
}
