/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:59:22 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:25:45 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	len = i;
	while (src[i - len] && (i + 1 < size))
	{
		dest[i] = src[i - len];
		i++;
	}
	if (len < size)
	{
		dest[i] = '\0';
	}
	return (len + ft_strlen(src));
}
