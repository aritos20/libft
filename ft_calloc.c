/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:11:47 by agianico          #+#    #+#             */
/*   Updated: 2019/11/14 18:27:22 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int		i;
	char				*p;

	i = 0;
	if (!(p = malloc(count * size)))
		return (0);
	while (i < (count * size))
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
