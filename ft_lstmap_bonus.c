/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:22:53 by agianico          #+#    #+#             */
/*   Updated: 2019/11/21 16:15:08 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*newlst;

	newlst = 0;
	while (lst)
	{
		if (!(p = ft_lstnew((f)(lst->content))))
			ft_lstdelone(lst, del);
		else
			ft_lstadd_back(&newlst, p);
		lst = lst->next;
	}
	return (newlst);
}
