/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:47:45 by rbourgea          #+#    #+#             */
/*   Updated: 2019/08/31 11:27:37 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	ft_print_hex(char c)
{
	char	*hex;
	int		i;

	i = 0 + c;
	hex = "0123456789abcdef";
	if (c > 16)
	{
		ft_print_hex(c / 10);
		ft_print_hex(c % 10);
	}
	else
		ft_putchar(hex[i]);
}

void			ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}
