/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:28:48 by marvin            #+#    #+#             */
/*   Updated: 2023/01/15 15:28:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int print_str(char *str);
int print_nbr(nbr);
int print_unsigned(unsigned int n);
int print_pointer(unsigned long long int dec);

#endif