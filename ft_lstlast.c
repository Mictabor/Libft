/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:01:42 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/08 18:00:54 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (!p || !lst)
		return (0);
	if (p->next == NULL)
		return (p);
	while (p != NULL)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}
