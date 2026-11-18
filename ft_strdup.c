/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:35:33 by micatabo          #+#    #+#             */
/*   Updated: 2026/04/30 18:39:13 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	p = malloc(len + sizeof(char));
	if (!p)
	{
		return (0);
	}
	while (((unsigned char *)s)[i])
	{
		((unsigned char *)p)[i] = ((unsigned char *)s)[i];
		i++;
	}
	((unsigned char *)p)[i] = '\0';
	return (p);
}
