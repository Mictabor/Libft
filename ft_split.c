/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 21:45:29 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:20:31 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_c(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	search_word(char const *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i = search_c(s, c, i);
		}
		else
			i++;
	}
	return (count);
}

static void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**sub;

	i = 0;
	j = 0;
	sub = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || !sub)
		return (0);
	while (j < ft_count(s, c))
	{
		i = search_word(s, c, i);
		sub[j] = ft_substr(s, i, search_c(s, c, i) - i);
		if (!sub[j])
		{
			ft_free(sub);
			return (0);
		}
		i = search_c(s, c, i);
		j++;
	}
	sub[j] = 0;
	return (sub);
}
