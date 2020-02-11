/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:00:38 by agianico          #+#    #+#             */
/*   Updated: 2019/11/15 11:44:42 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*p;

	i = 0;
	p = lst;
	if (!p)
		return (i);
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
