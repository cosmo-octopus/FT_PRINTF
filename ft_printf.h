/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:04:15 by hbalasan          #+#    #+#             */
/*   Updated: 2023/02/27 16:36:54 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_input_parser(const char *str, va_list args);
int		ft_is_argument(char c);
int		ft_formats(char c, va_list args);
int		ft_char_format(char c);
int		ft_string_format(char *s);
int		ft_void_pointer_format(void *ptr);
int		ft_decimal_format(int value);
int		ft_unsigned_decimal_format(unsigned int value);
int		ft_hex_format(unsigned int value);
int		ft_uppercase_hex_format(unsigned int value);
int		ft_percent_format(char c);
char	*ft_itoa_base(unsigned long long n, char *base);

#endif
