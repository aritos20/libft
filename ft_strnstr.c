/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:59:05 by agianico          #+#    #+#             */
/*   Updated: 2019/11/22 12:31:05 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k++] == to_find[j] && to_find[j] != '\0' && j < len - i)
			{
				j++;
				if (to_find[j] == '\0')
					return ((char *)&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
