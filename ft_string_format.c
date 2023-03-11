/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:20:41 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/07 20:36:03 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_string_format(char *s)
{
	int	len;

	len = 0;
	if (!s)
		len += write(1, "(null)", 6);
	if (s != NULL)
		len += write(1, s, ft_strlen(s));
	return (len);
}
