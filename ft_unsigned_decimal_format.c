/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal_format.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:25:59 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/07 16:56:21 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_decimal_format(unsigned int value)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_base(value, "0123456789");
	i = ft_string_format(str);
	free (str);
	return (i);
}
