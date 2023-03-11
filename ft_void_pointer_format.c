/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pointer_format.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:25:29 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/27 15:49:47 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_void_pointer_format(void *ptr)
{
	int		i;
	char	*str;

	i = 0;
	i += ft_string_format("0x");
	str = ft_itoa_base((unsigned long long)ptr, "0123456789abcdef");
	i += ft_string_format(str);
	free(str);
	return (i);
}
