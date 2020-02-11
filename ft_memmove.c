/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:57:42 by agianico          #+#    #+#             */
/*   Updated: 2019/11/14 15:42:09 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int		i;
	unsigned char		*p;
	unsigned char		*s;

	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (s < p)
		while (i++ < len)
			p[len - i] = s[len - i];
	else
		while (len-- > 0)
			*(p++) = *(s++);
	return (dest);
}
