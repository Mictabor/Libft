/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:13:44 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:49:27 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	j = 0;
	sub = malloc(ft_strlen(s1) + ft_strlen(s2) + sizeof(char));
	if (!s1 || !s2 || !sub)
		return (0);
	while (s1[i])
	{
		sub[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		sub[i + j] = s2[j];
		j++;
	}
	sub[i + j] = '\0';
	return (sub);
}
