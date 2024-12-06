/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:07:47 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/12 17:53:16 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*alst;

	if (!lst)
		return ;
	while (*lst)
	{
		alst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = alst;
	}
}
