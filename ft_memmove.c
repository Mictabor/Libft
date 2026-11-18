/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:22:26 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:25:22 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = ((unsigned char *)src);
	if (!dest && !src)
	{
		return (0);
	}
	if (dest > src)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = aux[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = aux[i];
			i++;
		}
	}
	return (dest);
}
