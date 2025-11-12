/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:33:41 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/10 21:32:04 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len(long n)
{
	long	len;

	len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_con(char *s, int b, int n)
{
	s[b] = '\0';
	if (n == 0)
		s[0] = '0';
}

char	*ft_itoa(int n)
{
	long	len;
	long	nb;
	char	*str;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	len += ft_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_con(str, len, n);
	if (n < 0)
		str[0] = '-';
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
