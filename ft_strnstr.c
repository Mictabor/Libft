/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:54:30 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/16 21:27:20 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	i = 0;
	j = 0;
	len_little = ft_strlen(little);
	if (len_little == 0 || big == little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && little [j] && ((j + i) < len))
		{
			if (j + 1 == len_little)
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
