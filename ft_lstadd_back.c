/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micatabo <micatabo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:33:28 by micatabo          #+#    #+#             */
/*   Updated: 2026/05/15 20:30:54 by micatabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	lst = ft_lstnew("hola");
	new = ft_lstnew("que tal");
	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
}*/