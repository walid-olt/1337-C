/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walid <github.com/walid-olt>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+      +#+          */
/*   Created: 2026/10/21 00:00:00 by walid             #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by walid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		new_word;
	char	*start_ptr;

	start_ptr = str;
	new_word = 1;
	while (*str)
	{
		if (((*str >= 48 && *str <= 57) || (*str >= 65 && *str <= 90)
				|| (*str >= 97 && *str <= 122)))
		{
			if (new_word && *str >= 97 && *str <= 122)
			{
				*str = *str - 32;
			};
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		str++;
	}
	return (start_ptr);
}
