/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:27:46 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/11 19:38:04 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (hay[i + j] == needle[j] && hay[i + j] && needle[j] && (i
				+ j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
