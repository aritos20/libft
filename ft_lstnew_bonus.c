/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:49:11 by agianico          #+#    #+#             */
/*   Updated: 2019/11/13 18:08:21 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list		*newlst;

	if (!(newlst = malloc(sizeof(t_list))))
		return (0);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
