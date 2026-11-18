/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:50:47 by micatabo          #+#    #+#             */
/*   Updated: 2026/04/30 21:43:53 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_c(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*sub;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i] && search_c(s1[i], (char *)set))
		i++;
	while (j >= 0 && search_c(s1[j], (char *)set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	sub = malloc(((j - i) + 2) * sizeof(char));
	if (!s1 || !sub)
		return (0);
	while (i <= j)
	{
		sub[k++] = s1[i++];
	}
	sub[k] = '\0';
	return (sub);
}
