/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxiong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 13:15:51 by mxiong            #+#    #+#             */
/*   Updated: 2018/03/13 15:55:00 by mxiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	nextlst;

	lst = *alst;
	while(lst)
	{
		nextlst = *lst->next;
		del(((*lst)->content), ((lst->content_size)));
		free(*alst[1]);
		next = *lst->nextlst;
	}
	*alst[1] = NULL;
}
