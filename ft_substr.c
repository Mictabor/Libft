/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:50:37 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:22:15 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub || !s)
		return (0);
	while (i < len && s[start + i])
	{
		sub[i] = ((char *)s)[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
