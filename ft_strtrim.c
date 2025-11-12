/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:42:42 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/07 04:01:21 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*p;
	size_t	st;
	size_t	e;

	st = 0;
	if (!s1 || !set)
		return (NULL);
	e = ft_strlen(s1);
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	while (e > 0 && ft_strrchr(set, s1[e - 1]))
		e--;
	if (st >= e)
		return (ft_strdup(""));
	p = malloc((e - st) + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + st, (e - st) + 1);
	return (p);
}
