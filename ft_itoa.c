/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 22:27:01 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/17 19:19:23 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numbers_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*sub;
	long	num;
	int		len;

	num = n;
	len = ft_numbers_len(n);
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	if (num < 0)
	{
		sub[0] = '-';
		num *= -1;
	}
	if (num == 0)
		sub[0] = '0';
	sub[len--] = '\0';
	while (num)
	{
		sub[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (sub);
}
