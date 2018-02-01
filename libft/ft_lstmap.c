/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:58:47 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 10:58:50 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *sort;

	if (lst)
	{
		sort = f(lst);
		sort->next = ft_lstmap(lst->next, f);
		return (sort);
	}
	return (NULL);
}
