/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:22:03 by agianico          #+#    #+#             */
/*   Updated: 2019/11/15 17:35:15 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int			i;
	unsigned char			*p;
	unsigned const char		*s;

	i = 0;
	p = (unsigned char*)dest;
	s = (unsigned const char*)src;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}
