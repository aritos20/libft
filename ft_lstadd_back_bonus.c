/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:40:05 by agianico          #+#    #+#             */
/*   Updated: 2019/11/22 17:26:04 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*p;

	p = *alst;
	if (p == 0)
		*alst = new;
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}
	p = 0;
}
