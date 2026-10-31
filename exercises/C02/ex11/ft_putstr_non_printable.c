/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walid <github.com/walid-olt>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+      +#+          */
/*   Created: 2026/10/26 00:00:00 by walid             #+#    #+#             */
/*   Updated: 2026/10/31 00:00:00 by walid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex_chars[] = "0123456789abcdef";
	char	high;
	char	low;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			high = hex_chars[(*str >> 4) & 0xF];
			low = hex_chars[(*str & 0xF)];
			ft_putchar('\\');
			ft_putchar(high);
			ft_putchar(low);
		}
		str++;
	}
}
