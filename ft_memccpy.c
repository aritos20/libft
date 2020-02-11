/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:30:58 by agianico          #+#    #+#             */
/*   Updated: 2019/11/22 12:06:32 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*p;
	unsigned char		*s;

	i = 0;
	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (0);
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			p[i] = s[i];
			return (&p[i + 1]);
		}
		p[i] = s[i];
		i++;
	}
	return (0);
}
