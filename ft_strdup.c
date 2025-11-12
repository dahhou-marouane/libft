/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 00:38:27 by mdahhou           #+#    #+#             */
/*   Updated: 2025/10/31 19:07:00 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s1) + 1;
	p = malloc(i);
	if (!p)
		return (0);
	ft_strlcpy(p, s1, i);
	return (p);
}
