/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walid <github.com/walid-olt>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+      +#+          */
/*   Created: 2026/10/26 00:00:00 by walid             #+#    #+#             */
/*   Updated: 2026/10/26 00:00:00 by walid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	x;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			x = (unsigned char)*str;
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		str++;
	}
}
