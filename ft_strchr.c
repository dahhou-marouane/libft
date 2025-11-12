/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:40:50 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/07 04:01:54 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*k;

	k = (unsigned char *)s;
	i = 0;
	while (s[i])
	{
		if (k[i] == ((unsigned char)c))
			return ((char *)&k[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&k[i]);
	return (NULL);
}
