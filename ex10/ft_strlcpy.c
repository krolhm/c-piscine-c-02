/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:09:24 by rbourgea          #+#    #+#             */
/*   Updated: 2019/08/31 11:32:23 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	a;
	unsigned	int	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	a = 0;
	while (src[a])
		a++;
	return (a);
}
